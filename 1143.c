#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i,h=1,g=1,j=1;
  scanf("%d",&n);
for(i=0;i<n;i++){
printf("%d %d %d\n",h,g,j);
h++;
g=h*h;
j=g*h;

}
    return 0;
}
