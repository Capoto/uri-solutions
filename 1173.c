#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
int v[10];
for(i=0;i<10;i++){
v[0] = n;

if(i!=0){
 v[i] = v[i-1]*2;
}
printf("N[%d] = %d\n",i,v[i]);


}


return 0;}
