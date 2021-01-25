#include<stdio.h>
void main(){

        int a,b,c,d,e,i,soma;
        

        scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a<b+c && b<a+c && c<a+b){

printf("S\n");
}          
else if(a<b+d && b<a+d && d<a+b){

printf("S\n");
}          
else if(a<c+d && c<a+d && d<a+c){

printf("S\n");
}          
else if(c<b+d && b<c+d && d<c+b){

printf("S\n");
} 
else{
printf("N\n");
}          
}
