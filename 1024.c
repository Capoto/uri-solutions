#include<stdio.h>
#include<string.h>
int main(){
       int n,x,i,posicao,j,h=0,l,w;
       char m[1001],a,s[1001];
       scanf("%d",&n);

while(n--){

scanf("\n%[^\n]",m);
x = strlen(m);

for(i=0;i<x;i++){
if(m[i]>='a' && m[i]<='z' || m[i]>='A' && m[i]<='Z'){
m[i] = m[i]+3;}
}

h =0;
for(j=x-1;j>=0;j--){
s[h] = m[j];
h++;}
s[h] = '\0';
l = x/2;
for(w=x/2;w<x;w++){

s[w] = s[w] -1;
}

printf("%s\n",s);
}



return 0;}
