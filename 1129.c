#include <stdio.h>
int main()
{
        while (1)
{
        int n;
        scanf("%d", &n);
if (n == 0) return 0;
        while(n--)
        {       
                int branco = 0, preto = 0;
char letra = 'A';
                int i = 0;
                for (i = 0; i < 5; i++)    
                {
                        
                        int k;
                        scanf("%d", &k);
                        if (k <= 127)
                        {
                                preto++;
                                letra = 'A' + i;
                        }
                        else
                        {
                                branco++;
                        }
                }
                if (preto == 1 && branco == 4)
                        printf("%c\n", letra);
                else
                        printf("*\n");
        }
}
        return 0;
}
