#include<stdio.h>
#include<string.h>
int main(){
  	char v[52];
  	char a;
        int n,i,j,k,l;

             scanf("%d",&n);

		for(i=0;i<n;i++){

                        scanf("%s",v);
                        scanf("%d",&k);
                        l = strlen(v);
                            for(j=0;j<l;j++){
			a = v[j]-k;		
                
                 if(a<65)a+=26;
                        

                       printf("%c", a);
}
printf("\n");

}




return 0;}
