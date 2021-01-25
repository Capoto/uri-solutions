#include<stdio.h>
int main(){
double n;
scanf("%lf",&n);

if( n >=0.0 && n < 2000.0){
printf("Isento\n");}

else if(n>=2000.0 && n <=3000.0){
printf("R$ %.2lf\n",(n-2000)*0.08);}

else if(n>=3000.01 && n<=4500.0){
printf("R$ %.2lf\n",(1000.0)*0.08 + (n-3000.0)*0.18);}

else if(n>=4500.01){
printf("R$ %.2lf\n",(1000.0)*0.08 + (1500.0)*0.18 + (n-4500.0)*0.28);}


return 0;}
