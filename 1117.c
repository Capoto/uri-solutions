#include <stdio.h>

int main() {
  float nota, somaNotas = 0, cont = 0;
  
  while(1) {
    scanf("%f", &nota);
    
    if(nota < 0 || nota > 10) {
      printf("nota invalida\n");
    } else {
      cont++;
      somaNotas += nota;
    }
    
    if(cont == 2) {
      break;
    }
  }
  
  printf("media = %.2f\n", somaNotas / 2);


  return 0;
}
