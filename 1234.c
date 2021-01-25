#include<stdio.h>
#include<string.h>
int main(){
    char s[51];
    int x,i,j;
          
            
     while(gets(s) !=NULL){
            x = strlen(s);
            j =0;
    for(i=0;i<x;i++){
        
      if(s[i] !=' '){
      j++; 
      if(s[i]>96 && j%2!=0)s[i]-=32;
     else if(s[i]<96 && j%2==0)s[i]+=32;
      
}}
s[x] ='\0';

printf("%s\n",s);
}       






return 0;}
