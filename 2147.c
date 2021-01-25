#include<stdio.h>
#include<string.h>
int main(){
int n,i;
char b[10002];
double x = strlen(b);
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("\n%[^\n]",b);
x = strlen(b);
printf("%.2lf\n",x/100);
}

return 0;}
