#include<stdio.h>
void main(){

        int a,b,c,d,e,f,g,h,i,j;
        
        scanf("%d",&a);

                for(i=0;i<a;i++){
                        
                        scanf("%d",&b);              
                        scanf("%d%d%d",&c,&d,&e);
                        scanf("%d%d%d",&f,&g,&h);  


                       if(e%2==0 && h%2==0){
                          if((d+c)/2 + b > (f+g)/2 +b){
                               printf("Dabriel\n");}
                          else if((d+c)/2 + b < (f+g)/2 +b){
                               printf("Guarte\n");}   
                          else{
                          
                             printf("Empate\n");}
}
                      else if(e%2==0 && h%2!=0){
                        if((d+c)/2 + b > (f+g)/2){
                               printf("Dabriel\n");}
                        else if((d+c)/2 + b < (f+g)/2){
                               printf("Guarte\n");}   
                        else{
                          
                             printf("Empate\n");}
}      

                      else if(e%2!=0 && h%2==0){
                        if((d+c)/2  > (f+g)/2 +b){
                               printf("Dabriel\n");}
                      else if((d+c)/2  < (f+g)/2 +b){
                               printf("Guarte\n");}   
                      else{
                          
                             printf("Empate\n");}      
}
  
                else if(e%2!=0 && h%2!=0){
                        if((d+c)/2  > (f+g)/2){
                               printf("Dabriel\n");}
                      else if((d+c)/2  < (f+g)/2){
                               printf("Guarte\n");}   
                      else{
                          
                             printf("Empate\n");}      

}  





}              


}
