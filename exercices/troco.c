#include <stdio.h>
#include <locale.h>

//Troco
int main() {
	setlocale(LC_ALL, "portuguese");
	
	double precoUnitario, dinheiroRecebido, troco;
	int quantidadeComprada;
	
	printf("Pre�o unit�rio do produto: ");
	scanf("%lf", &precoUnitario);
	
	printf("Quantidade comprada: ");
	scanf("%d", &quantidadeComprada);
	
	printf("Dinheiro recebido: ");
	scanf("%lf", &dinheiroRecebido);
	
	troco = dinheiroRecebido - (precoUnitario * quantidadeComprada);
	
	printf("\nTROCO = %.2lf", troco);
	
	return 0;
}
