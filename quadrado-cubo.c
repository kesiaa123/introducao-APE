#include <stdio.h>
#include <locale.h>
#include <math.h>

/*quadrado e cubo*/
int main(){
	setlocale(LC_ALL, "portuguese");
	
	double R, quadrado, cubo;
	
	printf("Digite um numero para calcular seu quadrado e cubo: ");
	scanf("%lf", &R);
	
	quadrado = pow(R,2);
	cubo = pow(R, 3);
	
	printf("\nquadrado = %.lf e seu cubo  = %.lf", quadrado, cubo);
}
