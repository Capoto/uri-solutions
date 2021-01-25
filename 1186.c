#include <stdio.h>

int main(void) {
double matriz[12][12],soma = 0.0;
int i,j,k,l,g=11,h=10;
char O[3]={'S','M'};
scanf("%s",O);
for(i=0;i<12;i++){
for(j=0;j<12;j++){
scanf("%lf",&matriz[i][j]);}

}
for(k=1;k<=11;k++){
for(l=11;l>=g;l--)  
soma+=matriz[k][l];
g--;}
if(O[0]=='S'){
printf("%.1lf\n",soma);
}
else if(O[0]=='M'){
printf("%.1lf\n",soma/66.0);
}

  return 0;
}
