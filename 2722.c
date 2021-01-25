#include <stdio.h>
#include <string.h>
int main()
{
        int n;
        scanf("%d", &n);
        getchar();
        while (n--)
        {        
                char str1[101], str2[101];
                fgets(str1, 101, stdin);
                fgets(str2, 101, stdin);
                int i = 0;
                for (i = 0; i < strlen(str1)-2; i += 2)
                {
                        printf("%c%c%c", str1[i], str1[i+1], str2[i]);
                        if (i < strlen(str2)-2)
                                printf("%c", str2[i+1]);
                }
                printf("\n");
        }
        return 0;
}
