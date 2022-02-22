//sintese
//objetivo
//entrada
//saida

#include<stdio.h>
#include<math.h>
int main (void) {
	
	float base,altura,area,perimetro,diagonal;
	
	printf("Base do retangulo: ");
	scanf("%f", &base);
	printf("Altura do retangulo: ");
	scanf("%f", &altura);
	area = (base*altura);
	perimetro = ((base*2) + (altura*2));
	diagonal = pow (base, 2) + pow (altura, 2);
	printf("Area = %.4f\n", area);
	printf("Perimetro = %.4f\n", perimetro);
	printf("Diagonal = %.4f", diagonal);
	
	return 0;
}
