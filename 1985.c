#include<stdio.h>
#include<string.h>

void main(){

         float d=0;
         int a,x,c,i;
         scanf("%d",&a);

                for(i=0;i<a;i++){
                             
                        scanf("%d%d",&x,&c);

             if(x==1001){
                               d+=c*1.5;}
                              if(x==1002){
                                 d+=c*2.5;}
                               if(x==1003){

                                d+=c*3.5;}
                                if(x==1004){
                                d+=c*4.5;}
                              if(x==1005){
                                d+=c*5.5;}



}
printf("%.2f\n",d);

}
