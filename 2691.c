#include<stdio.h>
#include<string.h>
int  main(){
int n,i,j;
int b;
int a;
scanf("%d",&n);

for(i=0;i<n;i++){

scanf("%dx%d",&a,&b);
if(a!=b){
for(j=5;j<=10;j++){

printf("%d x %d = %d && %d x %d = %d\n",a,j,a*j,b,j,b*j);
}}
if(a==b){


for(j=5;j<=10;j++){

printf("%d x %d = %d\n",a,j,a*j);

}

}}






return 0;}
