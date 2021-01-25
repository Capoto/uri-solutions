#include<stdio.h>
#include<string.h>
int main(){
   
    int z=0,i,j,n;
    

    scanf("%d",&n);
	
   char str[10100];
       
    int x =strlen(str) ; 
    	for(i=0;i<n;i++){

            scanf("%s",str);


             x = strlen(str);


		for(j=0;j<x;j++){

 if(str[j]=='1'){
   z+= 2 ;

}
else if(str[j]=='2'){
  z+= 5;
  
}
else if(str[j]=='3'){
  z+= 5;

}
else if(str[j]=='4'){
  z+=4;

}
else if(str[j]=='5'){
   z+=5;
}
else if(str[j]=='6'){
   z+=6;
}
else if(str[j]=='7'){
   z+=3;
}
else if(str[j]=='8'){
   z+=7;
}
else if(str[j]=='9'){
   z+=6;
}
else if(str[j]=='0'){
   z+=6;
}}


printf("%d leds\n",z);
z=0;
}








return 0;}
