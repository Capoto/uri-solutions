#include<stdio.h>
void main(){
        
        int x,z,i,soma=0,p=0;
        scanf("%d",&x);
        scanf("%d",&z);

          if(z>x){
                                for(i=x;i<=z;i++){
                
                                        soma+=i;
                                        p++;

                                if(soma>z){
printf("%d\n",p);                               
 break;
                                        }
}


}


                if(x>=z){
        do{
                scanf("%d",&z);

                }while(x>=z);
                        if(z>x){
                                for(i=x;i<=z;i++){
                
                                        soma+=i;
                                        p++;

                                if(soma>z){
printf("%d\n",p);                               
 break;
                                        }
}

}
}


}
