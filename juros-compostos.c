#include <stdio.h>
#include <locale.h>
#include <math.h>

/*calculadora de juros compostos*/

int main(){
	setlocale(LC_ALL, "portuguese");
	
	double principal, taxa, anos, montante;
	
	printf("Digite o capital, a taxa de numeros anuais e o numero de anos para calcular seu montante: ");
	scanf("%lf %lf %lf", &principal, &taxa, &anos);
	
	montante = principal * pow(1 + taxa / 100, anos);
	
	printf("montante = %.lf", montante);
}
