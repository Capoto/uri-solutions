#include<stdio.h>
#include<stdlib.h>
int main()
{
double a, b, m1, m2, mf, MEDIA;

scanf("%lf", &a);
m1=a*3.5;

scanf("%lf", &b);
m2=b*7.5;

MEDIA = ((a*3.5)+(b*7.5))/11;
printf("MEDIA = %.5lf\n", MEDIA);

return 0;
}
