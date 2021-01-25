#include<stdio.h>
int main(){
      
    int x,aux,v[20];

      for(x=0;x<20;x++){

      scanf("%d",&v[x]);}

     for(x=0;x<10;x++){

     aux=v[19-x];
   
     v[19-x]=v[x];
   
    
      v[x]=aux;}
   
      for(x=0;x<20;x++){

       printf("N[%d] = %d\n",x,v[x]);}

return 0;}
