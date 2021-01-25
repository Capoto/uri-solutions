#include<stdio.h>
void main(){

        long long int x,a,b,i,soma=0,d,h;
        


                while(1){
                        scanf("%lld",&x);

                                if(x==0){break;}

if(x*7%90!=0){        
if(x*7%90>=5 && (x*7%90)<=89){
printf("Brasil %lld x Alemanha %lld\n",x/90,x*7/90+1);  
}          
else{

printf("Brasil %lld x Alemanha %lld\n",x/90,x*7/90);}
}
if(x*7%90==0){

printf("Brasil %lld x Alemanha %lld\n",x/90,x*7/90);
}

}}
