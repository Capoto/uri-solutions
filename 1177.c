#include<stdio.h>
void main(){
        
        int x,i,y,j,h=0;
        
        scanf("%d",&x);
        
                for(i=0;i<1000;i++){
        h++;
            if(i%x==0){            
                 h=0;
                 printf("N[%d] = %d\n",i,h);

}
else if(i%x!=0){
printf("N[%d] = %d\n",i,h);

}

}
}
