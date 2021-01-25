#include<stdio.h>
int main(){
  

   int i,n,aux[2010]={0};
 
   scanf("%d",&n);

    int v;
     for(i=0;i<n;i++){
      
        scanf("%d",&v);
         aux[v]++;}

         for(i=1;i<=2000;i++){
          if(aux[i]>0)

printf("%d aparece %d vez(es)\n",i,aux[i]);
}
    

return 0;}
