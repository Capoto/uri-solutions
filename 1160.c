#include<stdio.h>

void main(){

        int a,b,c,i,j,de=0;
        double d,e,aux=0.0,h=0.0,k=0.0,w=1.0,l=1.0;
                
        
        scanf("%d",&a);

                while(a--){

                  scanf("%d%d%lf%lf",&b,&c,&d,&e);
                                            
                     for(j=0;j<107;j++){

 b*= 1.0 + (d/100.0);
 c*= 1.0 + (e/100.0);
 de++;
if((b) > (c) && de<=100){

printf("%d anos.\n",de);
l=1;
w=1;
de=0;
break;}
else if(de>100){
printf("Mais de 1 seculo.\n");
l=1;
w=1;
de=0;
break;}

}

}
                                 
}
