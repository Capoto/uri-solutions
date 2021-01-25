#include<stdio.h>
#include<string.h>
int main(){
	int n,i,x,b,l,w,k,c;
        scanf("%d",&n);
        char s[101],h[101];
        getchar();
        for(c=0;c<n;c++){
            gets(s);
            x = strlen(s);  
         
            l = x/2;
            b = 0;
			for(i=l-1;i>=0;i--){
                         h[b] = s[i];          
                         b++;}
b = l;
for(i=x-1;i>=l;i--){

h[b] = s[i];
b++;
}

h[x] = '\0';
puts(h);

}
return 0;}
