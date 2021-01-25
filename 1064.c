#include<stdio.h>
int main(){
    int i,j=0;
    double a,soma=0;
      for(i=0;i<6;i++){
  scanf("%lf",&a);

 if(a>=0){
j++;
soma+=a;
}}
printf("%d valores positivos\n",j);
printf("%.1lf\n",soma/j);



return 0;}
