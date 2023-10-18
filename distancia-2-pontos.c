#include <stdio.h>
#include <locale.h>
#include <math.h>

/*distancia entre dois pontos*/

int main(){
  setlocale(LC_ALL, "portuguese");
  double x1, y1, x2, y2, distancia;
  
  printf("digite o primeiro valor de X e Y :");
  scanf("%lf %lf", &x1, &y1);
  
  printf("digite o segundo valor de X e Y :");
  scanf("%lf %lf", &x2, &y2);
  
  distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  
  printf("a distancia = %.lf", distancia);
}
