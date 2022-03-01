//sintese
//objetivo
//entrada
//saida

#include<stdio.h>
int main (void){
	float precoU,valorDado,troco,precoF;
	int quantidade;
	
	printf("Preco unitario do produto: ");
	scanf("%f", &precoU);
	printf("Quantidade comprada: ");
	scanf("%d", &quantidade);
	printf("Dinheiro recebido: ");
	scanf("%f", &valorDado);
	precoF = precoU*quantidade;
		if (valorDado>precoF)
		{
		troco = valorDado-precoF;
		printf("Seu troco eh de: %f reais", troco);
		}
		else
		{
			if (valorDado=precoF);
			{
			   printf("Nao ha troco");
		    }
		}
			
	return 0;		
			
	}
	

	
	
