#include<stdio.h>
int main(){
int i,j,x,y,z,g=10;
double matriz[12][12],soma = 0.0;
char O[3]={'S','M'};
scanf("%s",&O);

for(i=0;i<12;i++){
for(j=0;j<12;j++)
scanf("%lf", &matriz[i][j]);
}
for(x=0;x<=10;x++){
for(y=g;y>=0;y--)

soma +=matriz[x][y];
g--;
}
if(O[0]=='S'){
printf("%.1lf\n",soma);
}
if(O[0]=='M'){
printf("%.1lf\n",soma/66.0);
}

return 0;}
