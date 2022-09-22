#include <stdio.h>
#include <locale.h>
#include <math.h>

//Circulo

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double raio, area;
	
	printf("Digite o valor do raio do circulo: ");
	scanf("%lf", &raio);
	
	area = M_PI * (raio * raio);
	
	printf("\nAREA = %.3lf", area);
	
	
	return 0;
}
