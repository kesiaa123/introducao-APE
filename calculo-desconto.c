#include <stdio.h>
#include <locale.h>

/*calculando descontos*/
int main() {
  setlocale(LC_ALL, "portuguese");

  /*declarando variaveis*/
  float preco, R;
  int desconto;

  /*solicitando ao usuario o preco e o desconto,
  e guardando na memória*/
  printf("CÁLCULO DO DESCONTO\n");
  printf("Digite o preço: ");
  scanf("%f", &preco);

  printf("Agora digite seu desconto: ");
  scanf("%i", &desconto);

  /*fórmula*/
  R = preco - (preco * desconto / 100);

  /*apresentando os resultados*/
  printf("\n %.2f reais com %i%% de desconto = %.2freais", preco, desconto, R);
  
}
