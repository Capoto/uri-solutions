#include<stdio.h>
#include<math.h>
#define pi 3.14
void main(){
     
        double v,d,h,a;


                while(scanf("%lf",&v) !=EOF){
                        scanf("%lf",&d);
                      
h =  v/(pi*pow(d/2,2));
a = pi*(pow(d/2,2));            
             printf("ALTURA = %.2lf\n",h);
             printf("AREA = %.2lf\n",a);        
}




}
