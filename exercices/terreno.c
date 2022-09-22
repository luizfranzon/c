#include <stdio.h>
#include <locale.h>

//Terreno

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double largura, comprimento, precoMetroQuadrado, areaTotal, precoTotal;
	
	printf("Digite a largura do terreno: ");
	scanf("%lf", &largura);
	
	printf("Digite o comprimento do terreno: ");
	scanf("%lf", &comprimento);
	
	printf("Digite o valor do metro quadrado: ");
	scanf("%lf", &precoMetroQuadrado);
	
	areaTotal = largura * comprimento;
	precoTotal = areaTotal * precoMetroQuadrado;
	
	printf("\nÁrea do terreno: %.2lf", areaTotal);
	printf("\nPreço do terreno: %.2lf", precoTotal);
	
	
	return 0;
}
