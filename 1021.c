#include<stdio.h>
int main()
{
    int x;
float b;
scanf("%f", &b);
x = (b+0.005) *100;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", x/10000);
x %= 10000;
printf("%d nota(s) de R$ 50.00\n", x/5000);
x %= 5000;
printf("%d nota(s) de R$ 20.00\n", x/2000);
x %= 2000;
printf("%d nota(s) de R$ 10.00\n", x/1000);
x %= 1000;
printf("%d nota(s) de R$ 5.00\n", x/500);
x %= 500;
printf("%d nota(s) de R$ 2.00\n", x/200);
x %= 200;
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", x/100);
x %= 100;
printf("%d moeda(s) de R$ 0.50\n", x/50);
x %= 50;
printf("%d moeda(s) de R$ 0.25\n", x/25);
x %= 25;
printf("%d moeda(s) de R$ 0.10\n", x/10);
x %= 10;
printf("%d moeda(s) de R$ 0.05\n", x/5);
x %= 5;
printf("%d moeda(s) de R$ 0.01\n", x);


return 0;}
