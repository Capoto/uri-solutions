#include<stdio.h>
int main(){
       
    int z,a=0,b=0,c=0,d=0,i;

      for(i=0;i<5;i++){
           scanf("%d",&z); 

       if(z%2==0){
a++;}
        else if(z%2!=0){
b++;}
       if(z>0){
c++;}
if(z<0){
d++;} }
printf("%d valor(es) par(es)\n",a);
printf("%d valor(es) impar(es)\n",b);
printf("%d valor(es) positivo(s)\n",c);
printf("%d valor(es) negativo(s)\n",d);
return 0;}
