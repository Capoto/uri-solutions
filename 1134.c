#include<stdio.h>
int main(){
          int x,b=0,h=0,c=0;
          
         while(1){
         scanf("%d",&x);
if(x==4)
break;

else
{

if(x==1) h++;
 else if(x==2) b++;
else if(x==3)c++;

else
continue;}
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",h);
printf("Gasolina: %d\n",b);
printf("Diesel: %d\n",c);


return 0;}
