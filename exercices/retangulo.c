#include <stdio.h>
#include <locale.h>
#include <math.h>

//Retangulo

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double baseRetangulo, alturaRetangulo, areaTotal, perimetroTotal, diagonalTotal;
	
	printf("Base do retangulo: ");
	scanf("%lf", &baseRetangulo);
	
	printf("Altura do retangulo: ");
	scanf("%lf", &alturaRetangulo);
	
	areaTotal = baseRetangulo * alturaRetangulo;
	perimetroTotal = (baseRetangulo * 2) + (alturaRetangulo);
	diagonalTotal = sqrt(baseRetangulo * baseRetangulo + alturaRetangulo * alturaRetangulo);
	
	
	printf("\nAREA: %.4lf", areaTotal);
	printf("\nPERIMETRO: %.4lf", perimetroTotal);
	printf("\nDIAGONAL: %.4lf", diagonalTotal);
	return 0;
}
