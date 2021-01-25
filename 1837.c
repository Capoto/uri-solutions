#include<stdio.h>
void main(){

         int x,a,b,c=0,d=0,soma,i;

     

          scanf("%d%d",&x,&a);

 if(x%a==0){
printf("%d 0\n",x/a);
}
else if(x>=0){
printf("%d %d\n",x/a,abs(x%a));} 
         
else if(x<0 && a>0){

for(i=0;i<1001;i++){

if( (-x)<a*i){
b = -i;
break;

}
}
printf("%d %d\n",b,x-a*b);

}
else if(x<0 && a<0){

for(i=0;i<1001;i++){

if( (x)>a*i){
b = i;
break;}
}

printf("%d %d\n",b,x-a*b);
}


}
