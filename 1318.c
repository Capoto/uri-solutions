#include<stdio.h>
int main(){
        int n,m,i;


                while(1){
                scanf("%d%d",&n,&m);
            
                if(n==0 && m==0){break;}
            
                int vetor[m],a[100001] = {},falsos = 0;

                    for(i=0;i<m;i++){
scanf("%d",&vetor[i]);
a[vetor[i]] +=1;

}
for(i=0;i<10001;i++){
                      if(a[i]>1)
                            falsos +=1;
}
printf("%d\n",falsos);
}




return 0;}
