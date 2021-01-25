#include<stdio.h>
void main(){

int x,y,i,j,soma=0;
scanf("%d",&x);

for(i=0;i<x;i++){
scanf("%d",&y);
for(j=1;j<y;j++){
if(y%j==0){

soma+=j;
}}
if(soma==y){

printf("%d eh perfeito\n",y);

}
if(soma!=y){
printf("%d nao eh perfeito\n",y);

}
soma=0;
}

}
