#include<stdio.h>
int main(){
int w,i,x,y,soma=0;
scanf("%d",&x);
scanf("%d",&y);
if(x<=y){
for(i=x+1;i<y;i++){
if(i%2!=0)
soma+=i;}}

else if(x>y){
for(w=y+1;w<x;w++){
if(w%2!=0)
soma+=w;}
}
printf("%d\n",soma);
return 0;}
