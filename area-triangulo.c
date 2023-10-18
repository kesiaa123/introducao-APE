#include <locale.h>
#include <stdio.h>

/*calculando area de triângulo*/
int main() {
  setlocale(LC_ALL, "portuguese");

  /*declarando variaveis*/
  int base, altura, area;

  /*solicitando ao usuario a base e a altura
  do triângulo e guardando na memória*/
  printf("     ÁREA DO TRIÂNGULO    \n");
  printf("\nDigite um valor para base de seu triângulo: ");
  scanf("%i", &base);

  printf("Digite um valor para altura de seu triângulo: ");
  scanf("%i", &altura);

  /*fórmula:*/
  area = (base * altura) / 2;

  /*apresentando resultados*/
  printf("\nA área deste triângulo é: %i", area);
}
