#include <stdio.h>

int main() {
	int n, i, menorValor = 1000, posicao;
		
	scanf("%d", &n);
	
	int x[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &x[i]);	
	}
	
	for(i = 0; i < n; i++) {
		if(menorValor > x[i]) {
			menorValor = x[i];		
			posicao = i;		
		}	
	}

	printf("Menor valor: %d\n", menorValor);
	printf("Posicao: %d\n", posicao);

	return 0;
}
