#include <stdio.h>

main() {
  /*alocar endereço de memória
  para armazenamento de informações*/
  char nome[50];
  int idade;
  char matricula[16];
  char endereco[100];
  char curso[50];
  int periodo;
  char disciplinas[50];
  float mensalidade;

  /*receber as informações e armazena-las
  nos endereços de memória, ou seja nas variaveis*/
  printf("_-_-_-_-__-_-_-_-__-_-_-_-_\n");
  printf("\n      CADASTRO UCB         ");
  printf("\n_-_-_-_-__-_-_-_-__-_-_-_-_");

  printf("\n Nome:");
  fgets(nome, 50, stdin);
  __fpurge(stdin);

  printf("\n Idade:");
  scanf("%d", &idade);
  __fpurge(stdin);

  printf("\n Matricula:");
  fgets(matricula, 16, stdin);
  __fpurge(stdin);

  printf("\n Endereço:");
  fgets(endereco, 100, stdin);
  __fpurge(stdin);

  printf("\n Curso:");
  fgets(curso, 50, stdin);
  fflush(stdin);

  printf("\n Período:");
  scanf("%i", &periodo);
  __fpurge(stdin);

  printf("\n Disciplinas:");
  fgets(disciplinas, 50, stdin);
  __fpurge(stdin);

  printf("\n Mensalidade:");
  scanf("%f", &mensalidade);
  __fpurge(stdin);

  /*apresentar os dados, ou seja, recuperação das
  informções armazenadas no endereço de memória */
  printf("_-_-_-_-__-_-_-_-__-_-_-_-_\n");
  printf("\n     DADOS CADASTRADOS     ");
  printf("\n_-_-_-_-__-_-_-_-__-_-_-_-_");

  printf("\n Nome: %s", nome);
  printf("\n Idade: %d", idade);
  printf("\n Matricula: %s", matricula);
  printf("\n Endereço: %s", endereco);
  printf("\n Curso: %s", curso);
  printf("\n Período: %i", periodo);
  printf("\n Disciplinas: %s", disciplinas);
  printf("\n Mensalidade: %2.f", mensalidade);
}
