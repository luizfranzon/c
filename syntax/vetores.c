#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int N, i;
	
	printf("Quantos n�meros voc� vai digitar? ");
	scanf("%d", &N);
	
	double vet[N];
	
	for(i = 0; i < N; i++ ) {
		printf("Digite um n�mero: ");
		scanf("%lf", &vet[i]);
	}
	
	printf("\nNumeros digitados:");
	for (i = 0; i < N; i++) {
		printf("\n%.2lf", vet[i]);
	}
	
	return 0;
}
