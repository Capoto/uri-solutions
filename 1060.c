#include<stdio.h>
int main(){
int d=0,i;
double a;
for(i=0;i<6;i++){
scanf("%lf",&a);
if(a>0){
d++;}
if(a==0){
scanf("%lf",&a);}}
printf("%d valores positivos\n",d);


return 0;}
