#include<stdio.h>
#include<string.h>
int main()
{
int i,j,l,k,h=1,g=10;
char O[3] = {'S','M'};
float  matriz[12][12],soma = 0;
scanf("%s",O);
for(i=0;i<12;i++){
for(j=0;j<12;j++)
scanf("%f",&matriz[i][j]);
}
for(k=11;k>=7;k--){
for(l=g;l>=h;l--)
soma +=matriz[l][k];
g--;
h++;
}
if(O[0]=='S'){  
printf("%.1f\n",soma);}
else if(O[0]=='M'){

printf("%.1f\n",soma/30.0);
}
 
    return 0;
}
