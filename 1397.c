#include<stdio.h>
int main(){
int i,n,pai,filho,d=0,e=0;


while(1){


scanf("%d", &n);

if(n==0){
break;}
    for(i=0;i<n;i++){
     scanf("%d %d",&pai,&filho);


if(pai>filho){
d++;}
else if(filho>pai){
e++;

}
else if(pai==filho){
d+=0;
e+=0;}

}

printf("%d %d\n",d,e);
d=0;
e=0;}





return 0;
}
