#include <locale.h>
#include <math.h>
#include <stdio.h>

/*equaçao do segundo grau*/

int main() {
  setlocale(LC_ALL, "portuguese");

  double a, b, c, delta, x1, x2;

  printf("digite um valor para a, b e c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  
  delta = pow(b, 2) - 4 * a * c;
  
  printf("\ndelta = %lf\n", delta);
  
  x1 = (-b + sqrt(delta)) / 2 * a;
  x2 = (-b - sqrt(delta)) / 2 * a;
  
  if (delta < 0) {
    printf("nao possui raizes reais");
    
  }
  else if (delta > 0) {
    printf("\nprimeira raiz = %.lf", x1);
    printf("\nsegunda raiz = %.lf", x2);
    
  }
}
