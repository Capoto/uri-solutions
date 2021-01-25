#include<stdio.h>
#include<string.h>
int main(){
int j,i,x,z,aux;
char a[27],b[10002],c[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
scanf("%[^\n]",a);
scanf("\n%[^\n]",b);
for(i=0;i<strlen(b);i++){
for(j=0;j<27;j++){
if(b[i]== a[j]){
b[i] = c[j];
break;
}
}
}
printf("%s\n",b);
return 0;}
