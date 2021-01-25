#include<stdio.h>
void main(){
        
          float x,p=0,soma=0,i;
          float media;
       
        while(1){

        scanf("%f",&x);
        
        if(x<0){
      media = soma/p;
      printf("%.2f\n",media); 
       break;
        }

        else{
p++;
soma+=x;
}


} 
               
}
