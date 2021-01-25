#include <stdio.h>

int main(void) {

char a[20];
char b[20];
char c[20];
int i=0;


scanf("%s",a);
scanf("%s",b);
scanf("%s",c);

if(a[0]=='v' && b[0]=='a' && c[0]=='c'){
printf("aguia\n");}
if(a[0]=='v' && b[0]=='a' && c[0]=='o'){
printf("pomba\n");}
if(a[0]=='v' && b[0]=='m' && c[0]=='o'){
printf("homem\n");}
if(a[0]=='v' && b[0]=='m' && c[0]=='h'){
printf("vaca\n");}
if(a[0]=='i' && b[0]=='i' && c[2]=='m'){
printf("pulga\n");}
else if(a[0]=='i' && b[0]=='i' && c[2]=='r'){
printf("lagarta\n");}
else if(a[0]=='i' && b[1]=='n' && c[2]=='m'){
printf("sanguessuga\n");}
else if(a[0]=='i' && b[1]=='n' && c[0]=='o'){
printf("minhoca\n");}


return 0;
}
