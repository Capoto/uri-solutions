#include<stdio.h>
int main(){
float z,x,soma = 0,b=0;
while(1){
scanf("%f",&z);
if(z>=0 && z<=10){
soma+=z;
b++;}
else { printf("nota invalida\n");}
if(b == 2){
printf("media = %.2f\n",soma/2);
soma = 0;
b = 0;
printf("novo calculo (1-sim 2-nao)\n");
do{
scanf("%f",&x);
if( x<1 || x>2 ){printf("novo calculo (1-sim 2-nao)\n");}
}while(x!=1 && x!=2);
if(x==2){break;}}}

return 0;}
