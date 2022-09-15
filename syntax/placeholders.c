#include <stdio.h>

int main()
{
  	//Placeholders
	
	int x, y;
	double doubleVar = 2.145;
	
	x = 10;
	y = 20;
	
	printf("%d %d \n", x + y);
	
	//Imprime sempre 6 casas decimais
	printf("%lf \n", doubleVar);
	
	//Para controlar quanrtas casas decimais colocamos um . e a quantidade de casas depois do %.
	printf("%.2lf \n", doubleVar);
    

	return 0;
}
