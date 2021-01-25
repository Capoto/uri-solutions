#include<stdio.h>
void main(){

         int vetor[15],i,j,p=0,g=0,k=0,w=0,ve[18],v[18];
        
                for(i=0;i<15;i++){
                        scanf("%d",&vetor[i]);
if(vetor[i]%2==0){
ve[p] = vetor[i];
k++;
p++;
if(p==5){
for(j=0;j<5;j++){

printf("par[%d] = %d\n",j,ve[j]);
p=0;}
}

}

if(vetor[i]%2!=0){
v[g] = vetor[i];
g++;
w++;
if(g==5){
for(j=0;j<5;j++){

printf("impar[%d] = %d\n",j,v[j]);
g=0;}

}

}
}
if(p+g==5){
for(j=0;j<g;j++){

printf("impar[%d] = %d\n",j,v[j]);}


for(i=0;i<p;i++){
printf("par[%d] = %d\n",i,ve[i]);}

}


}
