#include<stdio.h>
void main(){

int x,a,b,i,soma=0,d=a+1;

scanf("%d",&x);

while(x--){

scanf("%d",&a);
scanf("%d",&b);
d = a+1;
if(a%2==0){
for(i=0;i<b;i++){

soma+=d;
d+=2;
}
printf("%d\n",soma);
soma=0;
}
else{
for(i=0;i<b;i++){
soma+=a;
a+=2;
}
printf("%d\n",soma);
soma=0;
}


}





}
