#include<stdio.h>
#include<string.h>
int main(){
   int n,i,j,k;
   scanf("%d",&n);
   char str[61],sp[61];    
   int x = strlen(str),h = strlen(sp);        
         for(i=0;i<n;i++){

      scanf("%s %s",str,sp);
h = strlen(sp);
x = strlen(str);

                if(x>=h){
                    for(j=0;j<x;j++){
                                
                              if(j<x) printf("%c",str[j]);
                             if(j<h) { printf("%c",sp[j]);}

}
}
        
if(h>x){
                    for(k=0;k<h;k++){
                                
                              
                             if( k<x) printf("%c",str[k]);
                             
                            if(k<h) printf("%c",sp[k]);
   
                          
}


}

printf("\n");



}



return 0;}
