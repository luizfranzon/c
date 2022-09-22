#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int M, N, i, j;
	
	printf("Quantas linhas vai ter a matriz? ");
	scanf("%d", &M);
	printf("Quantas colunas vai ter a matriz? ");
	scanf("%d", &N);
	
	int mat[M][N];
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			
			printf("\nElemento [%d,%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nMATRIZ GERADA:\n");
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}

