#include<stdio.h>

int main (){
int i, n, x, a = 0, b = 0;
scanf("%d",&n);
for(i = 1; i <= n; i++){
scanf("%d",&x);

if(x>=10 && x<=20){
a++;
}
else {
b++;
}
}
printf("%d in\n%d out\n", a, b);
return 0;
}
