#include <stdio.h>
#include <locale.h>
/*calculando o tempo de viajem*/
int main(){
  setlocale(LC_ALL, "portuguese");

  /*declarando variaveis*/
  float distancia, velocidade, T;

  /*solicitando ao usuario a distancia
  pecorrida e a velocidade media*/
  printf("    TEMPO DE VIAJEM  \n");
  printf("Digite a distância em km: ");
  scanf("%f", &distancia);

  printf("Digite a velocidade média em km/h: ");
  scanf("%f", &velocidade);

  /*formula*/
  T = distancia / velocidade;

  /*apresentando o resultado*/
  printf("\n");
  printf("Tempo de viajem = %.2fh", T);
  
}
