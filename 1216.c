#include<stdio.h>
int main(){
double dist,soma = 0.0,x = 0.0;
char nome[100];
while(scanf("%[^\n]",nome) !=EOF){
scanf("%lf",&dist);
soma += dist;
x++;
}
printf("%.1lf\n",soma/x);

return 0;}
