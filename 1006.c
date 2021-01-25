#include<stdio.h>
#include<stdlib.h>
int main()
{
double a, b,c, m1, m2,m3,mf, MEDIA;

scanf("%lf", &a);
m1=a*2;

scanf("%lf", &b);
m2=b*3;
scanf("%lf",&c);
m3=c*5;
MEDIA = ((a*2)+(b*3)+(c*5))/10;
printf("MEDIA = %.1lf\n", MEDIA);

return 0;
}
