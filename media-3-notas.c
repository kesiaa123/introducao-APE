#include <stdio.h>

int main(){
	
	int num1, num2, num3, m;
	
	printf("digite tres notas: ");
	scanf("%i %i %i", &num1, &num2, &num3);
	
	m = (num1 + num2+ num3) / 3;
	
	printf("media = %i", m);
}
