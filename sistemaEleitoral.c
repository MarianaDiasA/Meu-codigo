#include <stdio.h>
#include <stdlib.h>


int main() {
	int idade;
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	
	if (idade == 41){
		printf("Vc ganhou o premio 1!");
		return 0;
	}
	if (idade == 82){
		printf("Vc ganhou o premio 2!");
		return 0;
	}
	if (idade < 0){
		printf("Vc n nasceu");
		return 0;
	}
	if (idade <= 15){
		printf("Vc n vota");
		return 0;
	}
	if (idade < 18){
		printf("Voto opcional");
		return 0;
	}
	if (idade <= 64){
		printf("Voto obrigatorio");
		return 0;
	}else{
		printf("Voto opcional");
		return 0;
	}
	
}
