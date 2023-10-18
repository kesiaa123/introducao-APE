#include <stdio.h>
#include <locale.h>
#include <math.h>

/*calculadora de raizes quadradas*/

int main(){
	setlocale(LC_ALL, "potuguese");
	
	double nume;
	
	printf("Digite um numero para calcular sua raiz quadrada: ");
	scanf("%lf", &nume);
	
	printf("A raiz quadrada = %.lf", sqrt(nume));
}
