#include<stdio.h>
void main(){
        
        int x,i,y,j;
        
        scanf("%d",&x);
        long long int vetor[x],vetor1[100];
                for(i=0;i<x;i++){
                     
                 scanf("%lld",&vetor[i]);
}
  for(i=0;i<x;i++){         
  for(j=0;j<100;j++){
vetor1[0] = 0;
vetor1[1] = 1;
vetor1[2] = 1;

if(j!=0 && j!=1 && j!=2){
vetor1[j] = vetor1[j-1] + vetor1[j-2];

}
}}
for(j=0;j<x;j++){
for(i=0;i<100;i++){
if(vetor[j]==i){
printf("Fib(%d) = %lld\n",i,vetor1[i]);
}}

}

}
