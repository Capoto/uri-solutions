#include<stdio.h>
#include<string.h>
int main(){
        int a,b,i,j,k;            
        scanf("%d%d",&a,&b);
        char string[a],string1[a],str[10001];        
        for(i=0;i<a;i++){
                scanf("%s %s%*c",&string[i], &string1[i]);
        }

        for(i=0;i<b;i++){
                getchar();
                scanf("%[^\n]",str);

                for(k=0;k<strlen(str);k++){
                      for(j=0;j<strlen(string);j++){
                              if(str[k]==string[j]){
                                      str[k] = string1[j];
                              }
                              else if(str[k] ==string1[j]){
                                      str[k]= string[j];
                              }

                      }
                }
                printf("%s\n",str);
        }

        return 0;
}
