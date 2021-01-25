#include<stdio.h>
int main() { 
        int n,x,i;

       scanf("%d\n",&n);
       
       double matriz[12] [12];
       double soma=0.0;  
         
       char T[2]={'S','M'};
       
       scanf("%s\n",&T);

      for(x=0;x<12;x++) {

    for( i=0;i<12;i++){
       
       scanf("%lf",&matriz[x][i]);
        if(n==x){
     
       soma+=matriz[x][i];} }}
     
       if(T[0]=='S'){
       printf("%.1lf\n",soma);}
       
      else if(T[0]=='M'){
     
         printf("%.1lf\n",soma/12.0);  }
        



        
return 0;}
