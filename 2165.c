#include <stdio.h>
#include <string.h>
int main(void) {
 int T[600];
gets (T);
int x = strlen(T);
if(x<=140){
printf("TWEET\n");
}  
if(x>140){
printf("MUTE\n");}

  return 0;
}
