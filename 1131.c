#include<stdio.h>
int main(void){
        
         int a,b,c,i=0,e=0,d=0,k=1;

      scanf("%d%d",&a,&b);

      printf("Novo grenal (1-sim 2-nao)\n");
        
        scanf("%d",&c);
      
      while(c==1){

       scanf("%d%d",&a,&b);
if(a>b)i++;
else if(b>a)e++;
else if(b==a)d++;


       printf("Novo grenal (1-sim 2-nao)\n");
      k++;
scanf("%d",&c);
}
while(c==2){

printf("%d grenais\n",k);

if(a>b)
i++;

else if(b>a)
e++;
else if(b==a) 
d++;
printf("Inter:%d\n",i);
printf("Gremio:%d\n",e);
printf("Empates:%d\n",d);
if(i>e){
printf("Inter venceu mais\n");}
else if(i<e){
printf("Gremio venceu mais\n");}
else if(i==e){
printf("Nao houve vencedor\n");}
break;}



return 0;}
