#include <stdio.h>
#include <math.h>

int main ()
{

  double a,b,c,d,x1,x2;
  scanf ("%lf %lf %lf", &a, &b, &c);
  d=(pow(b,2.0))-(4.0*a*c);
    if (d<0 || a==0){
  printf ("Impossivel calcular\n");
    }
  if (d>=0 && a>0) {
  x1=(-b + sqrt(d))/(2.0*a);
  x2=(-b - sqrt(d))/(2.0*a);

  printf ("R1 = %.5lf\n" ,x1);

  printf ("R2 = %.5lf\n" ,x2);
  }
return 0;
}
