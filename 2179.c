#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M[12][12];
	int N, F, C, casa=1;
	int i, j;
	scanf("%d", &N);

	for(i=0; i<N; ++i){
		for(j=0; j<N; ++j){
			M[i][j] = casa;
			casa ++;
		}
	}

	scanf("%d %d", &F, &C);

	int casas_passadas = 1, qnt_casas = N*N, qnt_movimentos=1;
	int contador_sinal;
	printf("%d", M[F][C]);

	for(i=F, j = C, contador_sinal=0; casas_passadas != qnt_casas; contador_sinal++)
	{
		int sinal, k;

		sinal = (pow(-1, contador_sinal));

		for(k=1; k <= (1+contador_sinal); k++){
			qnt_movimentos++;
			j = j + (1*sinal);
			if(i<N&&j<N&&i>=0&&j>=0){
				printf(" %d", M[i][j]);
				casas_passadas++;
				
				if(casas_passadas == qnt_casas)
					break;
			}
		}
		if(casas_passadas == qnt_casas)
			break;

		for(k=1; k <= (1+contador_sinal); k++){
			qnt_movimentos++;
			i = i + (1*sinal);
			if(i<N&&j<N&&i>=0&&j>=0){
				printf(" %d", M[i][j]);
				casas_passadas++;
				if(casas_passadas == qnt_casas)
					break;
			}
		}
	}

	printf("\n%d\n", qnt_movimentos);

	return 0;
}
