#include<stdio.h>
int main(){
int i,a,b,n;
double d;
scanf("%d",&n);
     for(i=0;i<n;i++){

scanf("%d %d",&a,&b);
if(b!=0){
d=(double)(a)/b;
printf("%.1lf\n",d);
}
else if(b==0){
printf("divisao impossivel\n");}
}







return 0;}
