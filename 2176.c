#include<stdio.h>
#include<string.h>
int main(){
     int i,d=0;
     char v[1000];
     char s[1000];
     scanf("%s",v);
     
        for(i=0;v[i];i++){
                if(v[i] =='1'){
d++;}}
    if(d%2==0){
     printf("%s0\n",v);
     
 }
else {

     printf("%s1\n",v);
}


return 0;}
