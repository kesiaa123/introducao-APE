#include <stdio.h>

int main() {
  int A, B, soma, subt, mult, divis;

  printf("SIMULAÇÃO DE OPERAÇÕES MATEMÁTICAS\n");
  printf("___________________________________\n");
  printf("Digite o primeiro número: ");
  scanf("%d", &A);
  printf("Digite o segundo número: ");
  scanf("%d", &B);

  soma = A + B;
  subt = A - B;
  mult = A * B;
  divis = A / B;

  printf("___________________________\n");
  printf("       RESULTADOS:\n");
  printf("___________________________\n");
  printf("soma: %d\n", soma);
  printf("subtração: %d\n", subt);
  printf("multiplicação: %d\n", mult);
  printf("divisão: %d\n", divis);
}
