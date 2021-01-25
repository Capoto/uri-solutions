#include<stdio.h>
#include<string.h>
int main(){

char L[600];

gets(L);

int x = strlen(L);

if(x<=80){

printf("YES\n");
}
if(x>80){
printf("NO\n");
}




return 0;}
