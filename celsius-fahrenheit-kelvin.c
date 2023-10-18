#include <stdio.h>

int main() {
    /*celsius para fahrenheit*/
    
    double c, f, k;
    
    printf("digite a temperatura em graus celsius: ");
    scanf("%lf", &c);
    
    f = (c * 9 / 5) + 32;
    k = c + 273,15;
    
    printf("\n");
    printf("esta temperatura em fahrenheit = %.2lf\n", f);
    printf("esta temperatura em kelvin = %.2lf", k);
    
    
}
