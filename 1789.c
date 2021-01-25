#include<stdio.h>
void main(){

         int x,a[501],b=0,c=0,d=0,soma,i;

          


              while(scanf("%d",&x) !=EOF){

                      

                      for(i=0;i<x;i++){

                      scanf("%d",&a[i]);

                if(a[i]>=20){

                b++;

}
                else if(a[i]>=10 && a[i]<20){

                c++;                   
}

                else if(a[i]<10){

                d++;}

}
 
       if(b>=1){
                 printf("3\n");
b=0;
c=0;
d=0;
}
        else if(b==0 && c>=1){
                printf("2\n");
c=0;
d=0;
}
         else if(b==0 && c==0){
                 printf("1\n");       
d=0;
} 


}


}
