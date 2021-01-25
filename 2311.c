#include<stdio.h>
int main(){
      int n,j,i;
      
     double  x,a,b=0.0,soma = 0.0,menor,maior ;
     
     char v[1000];
    
 scanf("%d\n",&n);

     for(i=0;i<n;i++){

         scanf("%s\n",v);

         scanf("%lf\n",&x);

      for(j=0;j<7;j++){
      
     scanf("%lf",&a);
    
    soma+=a;
if(j==0){
maior = a;
menor = a;}
else if(j>0){
if(menor>a){menor = a;}
if(maior<a){maior = a;}}
b = maior+menor;}
    printf("%s %.2lf\n",v,(soma-b)*x);
soma = 0.0;}
return 0;}
