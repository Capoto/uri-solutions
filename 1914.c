#include<stdio.h>
void main(){

        long long int c,d,e,i,soma;
        char nome[101],a[101],b[101],nome1[101];

        scanf("%lld",&c);


                for(i=0;i<c;i++){

                scanf("%s%s%s%s",nome,a,nome1,b);
                scanf("%lld%lld",&d,&e);

        if((d+e)%2==0){
                if(a[0]=='P'){
                        printf("%s\n",nome);
}
                else if(b[0]=='P'){
                        printf("%s\n",nome1);}
}
                if((d+e)%2!=0){
                        if(a[0]=='I'){
                                printf("%s\n",nome);
}
                        else if(b[0]=='I'){
                                 printf("%s\n",nome1);}

}

}
}
