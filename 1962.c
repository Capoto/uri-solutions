#include<stdio.h>
void main(){

        long long int c,d,e,i,soma;
        

        scanf("%lld",&c);

             for(i=0;i<c;i++){

                 scanf("%lld",&d);

                        if(d>=2015){

printf("%lld A.C.\n",d-2015+1);
}
else{
printf("%lld D.C.\n",2015-d);
}

}
               
}
