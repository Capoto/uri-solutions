#include<stdio.h>
int main(){
int x;

do{
scanf("%d",&x);

if(x==2002){
printf("Acesso Permitido\n");
}

if(x!=2002){
printf("Senha Invalida\n");}
} while(x!=2002);

return 0;}
