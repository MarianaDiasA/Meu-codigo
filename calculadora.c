#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void head(); 
float soma(float n1, float n2);
float sub(float n1, float n2);
float multi(float n1, float n2);
float divi(float n1, float n2);
void menu();

char le_valida_operador();

int main() {
	menu();
	return 0;
}
	
void head(){
	printf("CALCULADORA\n\n");
	printf("___________________\n");
}
//func. da soma
float soma(float n1, float n2){
	float resuSoma;
	resuSoma = n1 + n2;
	return resuSoma;
}
//func. da sub
float sub(float n1, float n2){
	float resuSub;
	resuSub = n1 - n2;
	return resuSub;
}
//func. da divi
float divi(float n1, float n2){
	float resuDivi;
	resuDivi = n1 / n2;
	return resuDivi;
}
//func. da multi
float multi(float n1, float n2){
	float resuMulti;
	resuMulti = n1 * n2;
	return resuMulti;
}
//func. le_valida_operador
char le_valida_operador(){
	char operador;
	int contador = 0;
	do{
		if(contador != 0){
			printf("______\nERRO\n______\n");
		}
	scanf("%c", &operador);
	contador++;
	
	}while(operador != '+' && operador != '-' && operador != '*' && operador != '/');

	return operador;
}
void menu(){
	float n1,n2,resu;
	char operador,resposta;
	
	head();
	do{
		
		printf("\nN1: ");
		scanf("%f", &n1);
		fflush(stdin);
		printf("OP: ");
		operador = le_valida_operador();
		printf("N2: ");
		scanf("%f", &n2);
		fflush(stdin);
		switch(operador){
			case '+':
				resu = soma(n1,n2);
		 		break;
		 	case '-':
		 		resu = sub(n1,n2);
		 		break;
		 	case '*':
		 		resu = multi(n1,n2);
		 		break;
		 	case '/':
		 		resu = divi(n1,n2);
		 		break;
		}
		printf("%.1f %c %.1f = %.1f\n", n1,operador,n2,resu);
		printf("Deseja continuar? (s/n): ");
		scanf("%c", &resposta);
	}while(tolower(resposta) == 's');
}

