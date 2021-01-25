#include<stdio.h>
#include<string.h>

void main(){

         
         int a,b,i,p=0;
         scanf("%d%d\n",&a,&b);

         int c[b];

                for(i=0;i<b;i++){

                    scanf("%d",&c[i]);
                    if(abs(c[i]-c[i-1])<=a && i!=0){

p++;

}


}
if(p==b-1){

printf("YOU WIN\n");
}
if(p!=b-1){

printf("GAME OVER\n");
}

