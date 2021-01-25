#include<stdio.h>
void main(){
        
        int x,i,soma=0;
        
        while(1){

                scanf("%d",&x);

                        if(x==0){

break;
}
                        for(i=0;i<5;i++){
if(x%2==0){
soma+=x;
x+=2;}
if(x%2!=0){
x++;
i--;
}

}
printf("%d\n",soma);
soma=0;
}

}
