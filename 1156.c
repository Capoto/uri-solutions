#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){

         float x,c=0,d=0,soma=0,i;
    for(i=1;i<=19;i++){

         d = 1 + 2*(i-1);   
         c = pow(0.5,i-1);
         soma+= (d*c);   

}

printf("%.2f\n",soma);

}
