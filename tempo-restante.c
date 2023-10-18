#include <stdio.h>
#include <locale.h>
#include <math.h>

/*tempo restante*/

int main(){
  setlocale(LC_ALL, "portuguese");
  
  double hora, minuto, tempo, restanteM, restanteH;
  
  printf("digite a hora atual e os minutos atuais: ");
  scanf("%lf %lf", &hora, &minuto);
  
  tempo = hora * 60 + minuto;
  restanteM = tempo - 1440;
  restanteH = tempo / 60;
  
  printf("%.2lf h = %.2lf minutos\n", hora, tempo);
  printf("falta = %.2lf horas = %.2lf minutos", restanteH, restanteM);
  
}
