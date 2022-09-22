#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int N, i;
	
	printf("Quantos números você vai digitar? ");
	scanf("%d", &N);
	
	double vet[N];
	
	for(i = 0; i < N; i++ ) {
		printf("Digite um número: ");
		scanf("%lf", &vet[i]);
	}
	
	printf("\nNumeros digitados:");
	for (i = 0; i < N; i++) {
		printf("\n%.2lf", vet[i]);
	}
	
	return 0;
}
