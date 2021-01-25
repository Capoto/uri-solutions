#include<stdio.h>
int main(){

	int x,i,j,b,z,soma = 0;

	scanf("%d",&x);

	for(j=1;j<=x;j++){
		scanf("%d %d",&b,&z);
		
		if(b<z){
			for(i=b+1;i<z;i++){
				if(i%2!=0){
					soma += i;
				}
			}
		}
		else if(z<b){
			for(i=z+1;i<b;i++){
				if(i%2!=0){
					soma += i;
				}
			}
		}
		printf("%d\n",soma);
		soma -= soma;
		
	}

return 0;}
