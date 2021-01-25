#include<stdio.h>
#define pi 0.66666666666666667
void main(){

        int b,c,d,e,i,soma;
        float a,p=0;
        float vetor[100001];
                while(scanf("%f",&a) !=EOF){

                  

                  for(i=0;i<a;i++){
                      scanf("%f",&vetor[i]);
if(vetor[i]==1){
p++;
}
}
if(p/a<=pi){
printf("acusacao arquivada\n");
p=0;

}
else{
printf("impeachment\n");
p=0;
}

}
        
        
}
