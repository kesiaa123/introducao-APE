#include <stdio.h>
#include <locale.h>

/*codigo que converta metros em 
centimetros e milimetros*/
int main(){
  setlocale(LC_ALL, "portuguese");

  /*declarando variaveis*/
  float metros, c, m;

  /*solicitando ao usuario um valor em metros,
  e guardando na memoria*/
  printf("Digite um número em metros: ");
  scanf("%f", &metros);

  /*formulas de conversao*/
  c = metros * 100;
  m = metros * 1000;

  /*apresentando resultados*/
  printf("\n");
  printf("Este valor em centímetros é: %.2f\n", c);
  printf("Este valor em milimetros é: %.2f", m);
}
