#include<stdio.h>
int main(){
int  w,h,n,i,soma=0;
int a=0,b=0,c=0;
double e,f,g;
char v[3];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&h);
scanf("%s",&v);
soma+=h;

if( v[0]=='C'){
a+=h;
}

else if( v[0]=='S'){
b+=h;}

else if( v[0]=='R'){
c+=h;
}
w =a+b+c;
f =(a/(w*1.0))*(100);
g =(b/(w*1.0))*(100);
e =(c/(w*1.0))*(100);}

printf("Total: %d cobaias\n",soma);
printf("Total de coelhos: %d\n",a);
printf("Total de ratos: %d\n",c);
printf("Total de sapos: %d\n",b);
printf("Percentual de coelhos: %.2lf %%\n",f);
printf("Percentual de ratos: %.2lf %%\n",e);
printf("Percentual de sapos: %.2lf %%\n",g);
return 0;}
