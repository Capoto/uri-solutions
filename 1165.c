#include<stdio.h>
void main(){

int x,y,i,j,soma=0;
scanf("%d",&x);

for(i=0;i<x;i++){
scanf("%d",&y);
for(j=1;j<y;j++){
if(y%j!=0){

soma++;
}}
if(soma==y-2){
printf("%d eh primo\n",y);
}
if(soma!=y-2){
printf("%d nao eh primo\n",y);
}
soma=0;
}}
