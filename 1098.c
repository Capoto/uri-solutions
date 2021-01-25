#include<stdio.h>
        
        int main(){
                int p=1,k=2,g=3;
                float i;
                float j,l,h;
                        i=0;
                        h = 0;
                             for(l=0;l<11;l++){

                              for(j=1;j<=3;j++){
                                if(i>0 && i<1 || i>1 && i<2){printf("I=%.1f J=%.1f\n",i,j+h);}

                                 else if(i==1){

printf("I=1 J=%d\n",k);
k++;}
else if(i==0){
printf("I=0 J=%d\n",p);
p++;}
else if(i>1.8){
printf("I=2 J=%d\n",g);
g++;}

}
i+=0.2;
h+=0.2;
}



return 0;
}
