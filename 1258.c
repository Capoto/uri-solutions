#include <stdio.h>
#include <string.h>

struct camisas {
    char nome[1001];
    char cor[101];
    char tam;
};

int main () {
    int n, i, j, cont=0;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        struct camisas pes[n];
        for (i=0;i<n;i++) {
            scanf("\n%[^\n]%s %s", pes[i].nome, pes[i].cor, &pes[i].tam);
        }
        for(i=0;i<n;i++) {
            for (j=i+1;j<n;j++) {
                if (strcmp(pes[i].cor, pes[j].cor) > 0) {
                        struct camisas aux = pes[i];
                        pes[i] = pes[j];
                        pes[j] = aux;
                }
                else if (strcmp(pes[i].cor, pes[j].cor) == 0) {
                        if (pes[i].tam < pes[j].tam) {
                                struct camisas aux = pes[i];
                                pes[i] = pes[j];
                                pes[j] = aux;
                        }
                        else if (pes[i].tam == pes[j].tam){
                                if (strcmp(pes[i].nome, pes[j].nome) > 0) {
                                    struct camisas aux = pes[i];
                                    pes[i] = pes[j];
                                    pes[j] = aux;

                                }
                                else if (strcmp(pes[i].nome, pes[j].nome) == 0) {
                                    int w;
                                    for(w=0;w<strlen(pes[i].nome);w++) {
                                        if (pes[i].nome[w] < pes[j].nome[w]) {
                                            struct camisas aux = pes[i];
                                            pes[i] = pes[j];
                                            pes[j] = aux;
                                            break;
                                        }
                                    }
                                }
                    }
                }
            }
        }
        if(cont>0)
            printf("\n");
        for (i=0;i<n;i++)
            printf("%s %c %s\n", pes[i].cor, pes[i].tam, pes[i].nome);
        cont++;
    }
    return 0;
}
