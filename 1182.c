#include<stdio.h>
int main(){

     int C,x,y;

    double matriz [12] [12],soma=0.0;
    
    char T[2]={'S','M'}; 
  
    scanf("%d\n",&C);
    scanf("%s\n",&T);

    for(x=0;x<12;x++){

    for(y=0;y<12;y++){
      scanf("%lf",&matriz[x][y]);
      
       if(C==y){
         soma+=matriz[x][y];}}}
   
       if(T[0]=='S'){
       
       printf(".1%lf\n",soma);}
    
         else if(T[0]=='M'){
      
       printf("%.1lf\n",soma/12.0);}

   return 0;}
