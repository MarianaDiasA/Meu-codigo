// Sintese
//   objetivo 
//   entrada 
//   saida 
#include <stdio.h>
#include <string.h>

int main (void) {
	char produto1[10]; 
	char produto2[2];
	char genero;
	int idade,codigo;
	float preco1,preco2;
	
	strcpy(produto1, "computador");
	strcpy(produto2, "TV");
	strcpy(genero, "F");
	idade = 30;
	codigo = 5291;
	preco1 = 2100.5;
	preco2 = 1830.0;
	
	printf("O produto %c", produto1, " custa R$ %f", preco1);
	printf("O produto %c", produto2, " custa R$ %f", preco2);
	
	printf("Codigo = %d", codigo);
	printf("Dados da pessoa : genero %c", genero, " e idade %d", idade);
	
	
	
	
	
	
	return 0; 
}
