#include<stdio.h>


        void main(){

                int a,b=0,i,j;
                scanf("%d",&a);
               int vetor[a],vetor1[a];
           
              


          for(i=0;i<a;i++){
               vetor1[0]=0; 
               vetor1[1]=1;
               vetor1[2]=1;            



if(i!=0 && i!=1 && i!=2){
                         b = vetor1[i-2]   + vetor1[i-1];

vetor1[i] = b;
}
                if(i!=a-1){  
                     printf("%d ",vetor1[i]);
                     }
                     else if(i==a-1){

printf("%d\n",vetor1[i]);
} 


}         
}
