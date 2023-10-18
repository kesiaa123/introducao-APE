#include <stdio.h>
#include <locale.h>
#include <math.h>
/*calculo do perimetro e area de um retangulo*/

int main(){
	setlocale(LC_ALL, "portuguese");
	
	double base, altura, P, A;
	
	printf("digite a base do retangulo: ");
	scanf("%lf", &base);
	
	printf("digite a altura do retangulo: ");
	scanf("%lf", &altura);
	
	P = base * 2 + altura * 2;
	A = base * altura;
	
	printf("Perimetro = %.lf\n", P);
	printf("Area = %.lf", A);
}
