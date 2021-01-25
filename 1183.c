#include<stdio.h>
int main(){
       int x,y;  
     
      char O[2]={'S','M'};

      double matriz[12] [12],soma=0.0;

      scanf("%s",&O);
      
      for(x=0;x<12;x++){
      
      for(y=0;y<12;y++){ 
      
       scanf("%lf",&matriz[x][y]);
      
        if(x<y){
          soma+=matriz[x][y];}}}

       if(O[0]=='S'){
        
        printf("%.1lf\n",soma);}
        
       else if(O[0]=='M'){

       printf("%.1lf\n",soma/66.0);}
      
     


return 0;}
