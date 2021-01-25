 #include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define MIN(a, b) ((a) < (b) ?  (a) : (b))
#define MAX(a, b) ((a) > (b) ?  (a) : (b))
#define ABS(a)  ((a) <  0  ? -(a) : (a))
#define IMPAR(a) ((a)&1)
#define CTOI(a)  ((a) - '0')
#define ITOC(a)  ((a) + '0')

#define TRUE 1
#define FALSE 0

typedef struct { int valor, id; } Suspeito;

int ordena(const void *arg1, const void *arg2)
{
 Suspeito *i = (Suspeito *) arg1, *j = (Suspeito *) arg2;
 
 if(i->valor == j->valor)
  return 0;
 else if(i->valor > j->valor)
  return -1;
 else
  return 1;
}

int main()
{
 int N, i;
 Suspeito *suspeitos;
 
 #ifdef DEBUG
  double tI_ = clock();
 #endif
 
 while(scanf("%d", &N) && N != 0)
 {
  suspeitos = (Suspeito *) malloc(N * sizeof(Suspeito));
  
  for(i = 0; i < N; i++)
  {
   scanf("%d", &suspeitos[i].valor);
   suspeitos[i].id = i + 1;
  }
  
  qsort(suspeitos, N, sizeof(Suspeito), ordena);
  
  printf("%d\n", suspeitos[1].id);
  
  free(suspeitos);
 }
 
 #ifdef DEBUG
  printf("Tempo: %.1lf %.1lf\n", clock() - tI_, (clock() - tI_) / CLK_TCK);
 #endif
 
 return 0;
}
