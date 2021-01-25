#include<stdio.h>
#include<string.h>

void main(){

         float d=0;
         int a,b,c,i;
         

         while(scanf("%d:%d",&a,&b) !=EOF){

if(a>7){

printf("Atraso maximo: %d\n",(a+1-8)*60+b);
}
if(a<7 || a==7 && b==0){

printf("Atraso maximo: 0\n");
}
if(a==7 && b>0){

printf("Atraso maximo: %d\n",b);
}

}



}
