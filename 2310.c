#include<stdio.h>
int main(){
    int n;
    
    scanf("%d\n",&n);
   
    int a[n],b[n],c[n],a1[n],b1[n],c1[n],i;
    
   double soma=0,soma1=0,soma2=0,soma3=0,soma4=0,soma5=0;
   
   double media=0,media1=0,media2=0;

   char w[n];



   for(i=0;i<n;i++){
   scanf("%s\n",&w[i]);
  
   scanf("%d %d %d\n",&a[i],&b[i],&c[i]);
  
    scanf("%d %d %d\n",&a1[i],&b1[i],&c1[i]);}
    
    for(i=0;i<n;i++){
    soma+=a[i];
    
    soma1+=b[i];
    
    soma2+=c[i];
    
    soma3+=a1[i];
    
    soma4+=b1[i];
    
    soma5+=c1[i];
    
    media=(soma3/soma);
 
    media1=(soma4/soma1);

    media2=(soma5/soma2);}

   printf("Pontos de Saque: %.2lf %%.\n",media*100);
   printf("Pontos de Bloqueio: %.2lf %%.\n",media1*100);
   printf("Pontos de Ataque: %.2lf %%.\n",media2*100);

return 0;}
