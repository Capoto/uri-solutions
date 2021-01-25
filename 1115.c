#include<stdio.h>
int main(void){
      int a,b;
    do{
    
    scanf("%d%d",&a,&b);

    if(a>0 && b>0){
 
    printf("primeiro\n");}

     else if(a>0 && b<0){

    printf("quarto\n");}

    else if(a<0 && b<0){

     printf("terceiro\n");}

     else if(a<0 && b>0){
 
    printf("segundo\n");}}while(a!=0 && b!=0);

return 0;}
