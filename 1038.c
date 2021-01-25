#include <stdio.h>
int main(){
int a,b,c;
double t;
scanf("%d %d",&a,&b);
if(a==1)
t=4*b;
if(a==2)
t=4.5*b;
if(a==3)
t=5*b;
if(a==4)
t=2*b;
if(a==5)
t=b*1.5;
printf("Total: R$ %.2lf\n",t);

return 0;
  
}
