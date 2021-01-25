#include<stdio.h>
int main(){
     double matriz[12][12],soma=0.0;

     int w,a,b,x,y,g=5,h=6;
     char O[2];
      scanf("%s", &O);
     for(x=0;x<12;x++){
        
         for(y=0;y<12;y++)
    
          scanf("%lf", &matriz[x][y]);}

     for(a=7; a<=11;a++){
         for(w=g;w <=h;w++)
             
   soma+=matriz[a][w];
     
     h++;
     g--;

     }
 

       if(O[0] == 'S'){

       printf("%.1lf\n", soma);
}

     else if(O[0] == 'M'){soma=soma/30.0;

   printf("%.1lf\n", soma);}

 
return 0;}
