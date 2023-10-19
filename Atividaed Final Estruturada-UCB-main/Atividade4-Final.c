#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DESCRICAO 100
#define MAX_SITE 100
#define MAX_TELEFONE 20
#define MAX_FABRICANTES 5 
#define MAX_PRODUTOS 50    
#define MIN_FABRICANTES 2 
#define MIN_PRODUTOS 5   

struct Fabricante {
  char nome[MAX_DESCRICAO];
  char site[MAX_SITE];
  char telefone[MAX_TELEFONE];
  char estado[2];
};

struct Produto {
  char descricao[MAX_DESCRICAO];
  float peso;
  float valorCompra;
  float valorVenda;
  float valorLucro;
  float percentualLucro;
  int fabricanteIndex;
};

void calcularLucro(struct Produto *produto);

int validarQuantidade(int min, int max, char *tipo);

void cadastrarFabricantes(struct Fabricante **fabricantes, int *numFabricantes);

void unidadeFederativa(struct Fabricante **fabricante, int i);

void cadastrarProdutos(struct Produto **produtos, int numFabricantes,
                       int *numProdutos);

void exibirFabricantes(struct Fabricante **fabricantes, int numFabricantes);

void exibirProdutos(struct Produto **produtos, int numProdutos,
                    struct Fabricante **fabricantes, int numFabricantes);

void listarMarcas(struct Fabricante **fabricantes, int numFabricantes);

void listarProdutos(struct Produto **produtos, int numProdutos);

void listarProdutosEstado(struct Produto **produtos, int numProdutos,
                          struct Fabricante **fabricantes, int numFabricantes);

void listarProdutosMarca(struct Produto **produtos, int numProdutos,
                         struct Fabricante **fabricantes, int numFabricantes);

void estadoProdutoMaisCaro(struct Produto **produtos, int numProdutos,
                           struct Fabricante **fabricantes, int numFabricantes);

void fabricanteProdutoMaisBarato(struct Produto **produtos, int numProdutos,
                                 struct Fabricante **fabricantes,
                                 int numFabricantes);

void listarProdutosOrdenadosValor(struct Produto **produtos, int numProdutos);

void le_valida_peso(struct Produto **produtos, int i);

void le_valida_valorCompra(struct Produto **produtos, int i);

void le_valida_valorVenda(struct Produto **produtos, int i);

void imprimeAlfabeto(struct Produto **produtos, int numProdutos);

void imprimeAlfabetoReverso(struct Produto **produtos, int numProdutos);

int main() {
  system("cls");
  system("clear");

  struct Fabricante **fabricantes =
      malloc(MAX_FABRICANTES * sizeof(struct Fabricante *));
  struct Produto **produtos = malloc(MAX_PRODUTOS * sizeof(struct Produto *));
  int numFabricantes = 0;
  int numProdutos = 0;

  int opcao;
  do {
    printf("------ Menu de Opcoes ------\n");
    printf("1. Cadastrar Fabricantes\n");
    printf("2. Cadastrar Produtos\n");
    printf("3. Exibir Fabricantes Cadastrados\n");
    printf("4. Exibir Produtos Cadastrados\n");
    printf("5. Listar Marcas\n");
    printf("6. Listar Produtos\n");
    printf("7. Listar Produtos por Estado\n");
    printf("8. Listar Produtos por Marca\n");
    printf("9. Estado do Produto Mais Caro\n");
    printf("10. Fabricante do Produto Mais Barato\n");
    printf("11. Listar Produtos Ordenados por Valor de Venda\n");
    printf("12. Listar Produtos em ordem alfabetica\n");
    printf("13. Listar Produtos em ordem alfabetica reversa\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      cadastrarFabricantes(fabricantes, &numFabricantes);
      break;
    case 2:
      cadastrarProdutos(produtos, numFabricantes, &numProdutos);
      break;
    case 3:
      system("cls");
      system("clear");

      exibirFabricantes(fabricantes, numFabricantes);
      break;
    case 4:
      system("cls");
      system("clear");

      exibirProdutos(produtos, numProdutos, fabricantes, numFabricantes);
      break;
    case 5:
      system("cls");   // para windows
      system("clear"); // para linuz e macOs

      listarMarcas(fabricantes, numFabricantes);
      break;
    case 6:
      system("cls");   // para windows
      system("clear"); // para linuz e macOs

      listarProdutos(produtos, numProdutos);
      break;
    case 7:
      system("cls");   // para windows
      system("clear"); // para linuz e macOs

      listarProdutosEstado(produtos, numProdutos, fabricantes, numFabricantes);
      break;
    case 8:
      system("cls");
      system("clear");

      listarProdutosMarca(produtos, numProdutos, fabricantes, numFabricantes);
      break;
    case 9:
      system("cls");   // para windows
      system("clear"); // para linuz e macOs

      estadoProdutoMaisCaro(produtos, numProdutos, fabricantes, numFabricantes);
      break;
    case 10:
      system("cls");   // para windows
      system("clear"); // para linuz e macOs

      fabricanteProdutoMaisBarato(produtos, numProdutos, fabricantes,
                                  numFabricantes);
      break;
    case 11:
      system("cls");
      system("clear");

      listarProdutosOrdenadosValor(produtos, numProdutos);
      break;
    case 12:
      system("cls");   // para windows
      system("clear"); // para linuz e macOs

      imprimeAlfabeto(produtos, numProdutos);
      break;
    case 13:
      system("cls");
      system("clear");
      imprimeAlfabetoReverso(produtos, numProdutos);
      break;
    case 0:
      system("cls");
      system("clear");

      printf("++++Saindo do programa+++++\n");
      break;
    default:
      printf("Opcao invalida. Tente novamente.\n");
    }
    printf("\n");
  } while (opcao != 0);

  // Libera a memória alocada
  for (int i = 0; i < numFabricantes; i++) {
    free(fabricantes[i]);
  }
  free(fabricantes);

  for (int i = 0; i < numProdutos; i++) {
    free(produtos[i]);
  }
  free(produtos);

  return 0;
}

void calcularLucro(struct Produto *produto) {
  produto->valorLucro = produto->valorVenda - produto->valorCompra;
  produto->percentualLucro = (produto->valorLucro / produto->valorCompra) * 100;
}

int validarQuantidade(int min, int max, char *tipo) {
  int quantidade;
  do {
    printf("\nDigite a quantidade de %s (%d a %d): ", tipo, min, max);
    scanf("%d", &quantidade);
    if (quantidade < min || quantidade > max) {
      printf("\nQuantidade invalida. Tente novamente.\n");
    }
  } while (quantidade < min || quantidade > max);
  return quantidade;
}

void cadastrarFabricantes(struct Fabricante **fabricantes,
                          int *numFabricantes) {
  int quantidade =
      validarQuantidade(MIN_FABRICANTES, MAX_FABRICANTES, "fabricantes");

  for (int i = 0; i < quantidade; i++) {
    fabricantes[*numFabricantes + i] = malloc(sizeof(struct Fabricante));

    system("cls");   // para windows
    system("clear"); // para linuz e macOs

    printf("> Fabricante %d:\n\n", *numFabricantes + i + 1);

    printf("> Digite o nome: ");
    scanf(" %[^\n]s", fabricantes[*numFabricantes + i]->nome);

    printf("> Digite o site: ");
    scanf(" %[^\n]s", fabricantes[*numFabricantes + i]->site);

    printf("> Digite o telefone: ");
    scanf(" %[^\n]s", fabricantes[*numFabricantes + i]->telefone);

    unidadeFederativa(fabricantes, i);

    system("cls");   // para windows
    system("clear"); // para linuz e macOs

    printf("------Fabricante cadastrado com sucesso------\n");
  }

  *numFabricantes += quantidade;
}

enum uf_estados {
  AC,
  AL,
  AP,
  AM,
  BA,
  CE,
  DF,
  ES,
  GO,
  MA,
  MT,
  MS,
  MG,
  PA,
  PB,
  PR,
  PE,
  PI,
  RJ,
  RN,
  RS,
  RO,
  RR,
  SC,
  SP,
  SE,
  TO
} ufs;

void unidadeFederativa(struct Fabricante **fabricante, int i) {
  char estados[27][3] = {"AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO",
                         "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI",
                         "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"};

  int k = 0;
  for (k = 0; k < 27; k++) {
    if (k % 2 == 0) {
      printf("[%d] - %s\t", k, estados[k]);
    } else {
      printf("[%d] - %s\n", k, estados[k]);
    }
  }

  printf("\nInforme o numero da UF: ");
  scanf("%d", (int *)&ufs);

  while (ufs < AC || ufs > TO) {
    printf("\nUF INVALIDA - Informe o numero da UF: ");
    scanf("%d", (int *)&ufs);
  }

  strcpy(fabricante[i]->estado, estados[ufs]);
}

void cadastrarProdutos(struct Produto **produtos, int numFabricantes,
                       int *numProdutos) {
  int quantidade = validarQuantidade(MIN_PRODUTOS, MAX_PRODUTOS, "produtos");

  for (int i = 0; i < quantidade; i++) {
    produtos[*numProdutos + i] = malloc(sizeof(struct Produto));

    system("cls");
    system("clear");

    printf("> Produto %d:\n\n", *numProdutos + i + 1);

    printf("> Digite a descricao: ");
    scanf(" %[^\n]s", produtos[*numProdutos + i]->descricao);

    le_valida_peso(produtos, i);

    le_valida_valorCompra(produtos, i);

    le_valida_valorVenda(produtos, i);

    produtos[*numProdutos + i]->fabricanteIndex = rand() % numFabricantes;

    calcularLucro(produtos[*numProdutos + i]);

    system("cls");
    system("clear");

    printf("-----Produto cadastrado com sucesso.-----\n");
  }

  *numProdutos += quantidade;
}

void exibirFabricantes(struct Fabricante **fabricantes, int numFabricantes) {
  printf("Fabricantes Cadastrados:\n\n");

  for (int i = 0; i < numFabricantes; i++) {

    printf("##Fabricante %d##\n", i + 1);
    printf("> Nome: %s\n", fabricantes[i]->nome);
    printf("> Site: %s\n", fabricantes[i]->site);
    printf("> Telefone: %s\n", fabricantes[i]->telefone);
    printf("> Estado: %s\n", fabricantes[i]->estado);

    printf("\n");
  }
}

void exibirProdutos(struct Produto **produtos, int numProdutos,
                    struct Fabricante **fabricantes, int numFabricantes) {
  printf("-----Produtos Cadastrados:-----\n\n");

  for (int i = 0; i < numProdutos; i++) {
    printf("##Produto %d##\n", i + 1);
    printf("> Descricao: %s\n", produtos[i]->descricao);
    printf("> Peso: %.2f\n", produtos[i]->peso);
    printf("> Valor de Compra: %.2f\n", produtos[i]->valorCompra);
    printf("> Valor de Venda: %.2f\n", produtos[i]->valorVenda);
    printf("> Valor de Lucro: %.2f\n", produtos[i]->valorLucro);
    printf("> Percentual de Lucro: %.2f%%\n", produtos[i]->percentualLucro);
    printf("> Fabricante: %s\n",
           fabricantes[produtos[i]->fabricanteIndex]->nome);
    printf("\n");
  }
}

void listarMarcas(struct Fabricante **fabricantes, int numFabricantes) {
  printf("-----Marcas Cadastradas:------\n\n");

  for (int i = 0; i < numFabricantes; i++) {
    printf("%d. %s\n", i + 1, fabricantes[i]->nome);
  }
}

void listarProdutos(struct Produto **produtos, int numProdutos) {
  printf("Produtos Cadastrados:\n");

  for (int i = 0; i < numProdutos; i++) {
    printf("%d. %s\n", i + 1, produtos[i]->descricao);
  }
}

void listarProdutosEstado(struct Produto **produtos, int numProdutos,
                          struct Fabricante **fabricantes, int numFabricantes) {
  char estado[3];
  printf("> Digite o estado: ");
  scanf(" %[^\n]s", estado);

  for (int i = 0; estado[i] != '\0'; i++) {
    estado[i] = toupper(estado[i]);
  }

  printf("Produtos do estado %s:\n", estado);

  int encontrado = 0;

  for (int i = 0; i < numProdutos; i++) {
    if (strcmp(fabricantes[produtos[i]->fabricanteIndex]->estado, estado) ==
        0) {
      printf("> Produto: %s\n", produtos[i]->descricao);
      printf("> Fabricante: %s\n",
             fabricantes[produtos[i]->fabricanteIndex]->nome);
      encontrado = 1;
    }
  }

  if (!encontrado) {
    printf("-----Nenhum produto encontrado------\n");
  }
}

void listarProdutosMarca(struct Produto **produtos, int numProdutos,
                         struct Fabricante **fabricantes, int numFabricantes) {
  listarMarcas(fabricantes, numFabricantes);

  printf("Digite o numero da marca: ");
  int marca;
  scanf("%d", &marca);

  printf("Produtos da marca %s:\n", fabricantes[marca - 1]->nome);

  int encontrado = 0;

  for (int i = 0; i < numProdutos; i++) {
    if (produtos[i]->fabricanteIndex == marca - 1) {
      printf("Produto: %s\n", produtos[i]->descricao);
      encontrado = 1;
    }
  }

  if (!encontrado) {
    printf("Nenhum produto encontrado.\n");
  }
}

void estadoProdutoMaisCaro(struct Produto **produtos, int numProdutos,
                           struct Fabricante **fabricantes,
                           int numFabricantes) {
  float valorMax = 0;
  char estado[3];
  int encontrado = 0;

  for (int i = 0; i < numProdutos; i++) {
    if (produtos[i]->valorVenda > valorMax) {
      valorMax = produtos[i]->valorVenda;
      strcpy(estado, fabricantes[produtos[i]->fabricanteIndex]->estado);
      encontrado = 1;
    }
  }

  if (encontrado) {
    printf("Estado do produto mais caro: %s\n", estado);
  } else {
    printf("Nenhum produto encontrado.\n");
  }
}

void fabricanteProdutoMaisBarato(struct Produto **produtos, int numProdutos,
                                 struct Fabricante **fabricantes,
                                 int numFabricantes) {
  float valorMin = produtos[0]->valorVenda;
  int indexMin = 0;

  for (int i = 1; i < numProdutos; i++) {
    if (produtos[i]->valorVenda < valorMin) {
      valorMin = produtos[i]->valorVenda;
      indexMin = i;
    }
  }

  printf("Fabricante do produto mais barato: %s\n",
         fabricantes[produtos[indexMin]->fabricanteIndex]->nome);
}

void listarProdutosOrdenadosValor(struct Produto **produtos, int numProdutos) {
  // Ordena os produtos usando o algoritmo de seleção
  for (int i = 0; i < numProdutos - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < numProdutos; j++) {
      if (produtos[j]->valorVenda < produtos[minIndex]->valorVenda) {
        minIndex = j;
      }
    }
    struct Produto *temp = produtos[minIndex];
    produtos[minIndex] = produtos[i];
    produtos[i] = temp;
  }

  printf("Produtos Ordenados por Valor de Venda:\n");

  for (int i = 0; i < numProdutos; i++) {
    printf("%d. %s - R$%.2f\n", i + 1, produtos[i]->descricao,
           produtos[i]->valorVenda);
  }
}

void le_valida_valorCompra(struct Produto **produtos, int i) {
  int loop = 0;

  do {

    if (loop == 0) {
      printf("> Digite o valor de compra: ");
      scanf("%f", &(produtos[i]->valorCompra));
      loop += 1;
    } else {

      printf("> VALOR INVALIDO - Digite o valor de compra: ");
      scanf("%f", &(produtos[i]->valorCompra));
    }

  } while (produtos[i]->valorCompra < 0.50 || produtos[i]->valorCompra > 8000);
}

void le_valida_valorVenda(struct Produto **produtos, int i) {
  int loop = 0;

  do {

    if (loop == 0) {
      printf("> Digite o valor de venda: ");
      scanf("%f", &(produtos[i]->valorVenda));
      loop += 1;

    } else {

      printf("> VALOR INVALIDO - Digite o valor de venda: ");
      scanf("%f", &(produtos[i]->valorVenda));
    }

  } while (produtos[i]->valorVenda < 1 || produtos[i]->valorVenda > 10000);
}

void le_valida_peso(struct Produto **produtos, int i) {
  int loop = 0;

  do {
    if (loop == 0) {
      printf("> Digite em gramas o PESO entre 50g e 50000g: ");
      scanf("%f", &(produtos[i]->peso));
      loop += 1;

    } else {
      printf("> VALOR INVALIDO - em gramas o peso: ");
      scanf("%f", &(produtos[i]->peso));
    }

  } while (produtos[i]->peso < 50 || produtos[i]->peso > 50000);
}

void imprimeAlfabeto(struct Produto **produtos, int numProdutos) {
  int i, j;
  char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                     'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                     's', 't', 'u', 'v', 'x', 'y', 'z'};

  printf("\nProdutos listados em ordem alfabética:\n\n");

  for (j = 0; j < 26; j++) {

    char temp[2] = {alfabeto[j], '\0'};
    char tempUpper[2] = {toupper(alfabeto[j]), '\0'};

    for (i = 0; i < numProdutos; i++) {
      if (strcmp(produtos[i]->descricao, temp) == 1 ||
          strcmp(produtos[i]->descricao, tempUpper) == 1) {
        printf("%s\n", produtos[i]->descricao);
      }
    }
  }
}

void imprimeAlfabetoReverso(struct Produto **produtos, int numProdutos) {
  int i, j;
  char alfabeto[] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r',
                     'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i',
                     'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};

  printf("\nProdutos listados em ordem alfabética reversa:\n\n");

  for (j = 0; j < 26; j++) {

    char temp[2] = {alfabeto[j], '\0'};
    char tempUpper[2] = {toupper(alfabeto[j]), '\0'};

    for (i = 0; i < numProdutos; i++) {
      if (strcmp(produtos[i]->descricao, temp) == 1 ||
          strcmp(produtos[i]->descricao, tempUpper) == 1) {
        printf("%s\n", produtos[i]->descricao);
      }
    }
  }
}