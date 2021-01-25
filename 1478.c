#include<stdio.h>
int main(){
	int n,i,j,p,k,d,e;
	int matriz[101][101];

		while(1){
			scanf("%d",&n);
                         if(n==0){break;}
					for(i=0;i<n;i++){
						p = i+1;
						k =2;
							for(j=0;j<=i;j++,p--){
								matriz[i][j] = p;
		}
			for(j=i+1;j<n;j++,k++){
				matriz[i][j] = k;}
	}
				for(i=0;i<n;i++){
					for(j=0;j<n;j++)
							if(j==0)printf("%3d",matriz[i][j]);
  							else{ printf(" %3d",matriz[i][j]);
}printf("\n");

}printf("\n");

}

return 0;}
