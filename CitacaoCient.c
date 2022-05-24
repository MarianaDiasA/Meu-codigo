#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char nome[200], novo[200], letra;
	int x, y = 0,total = 0, temp = 0;

	printf("Informe seu nome: ");
	scanf("%[^\n]s", &nome);

	for (x=0;x < strlen(nome);x++){
		if(nome[x] == ' '){
			total++;
		}
	}
	for (x=0;x < strlen(nome);x++){
		if(temp == total){
			letra = nome[x];
			letra = toupper(letra);
			novo[y] = letra;
			y++;
		}
		if(nome[x] == ' '){
			temp++;
		}
	}
    novo[y] = ',';
    y++;

    for (x = y; x<=200; x++) {
        novo[x] = ' ';
    }

	temp = 0;

	for (x=0;x<strlen(nome);x++){
		if(x == 0){
			letra = nome[x];
			letra = toupper(letra);
			novo[y] = ' ';
			y++;
			novo[y] = letra;
			y++;
			novo[y] = '.';
			y++;
		}
		if(nome[x] == ' ' && nome[x + 1] != ' ' && temp + 1 != total){
			letra = nome[x+1];
			letra = toupper(letra);
			novo[y] = ' ';
			y++;
			novo[y] = letra;
			y++;
			novo[y] = '.';
			y++;
			temp++;
	    }
	}
	printf("\n%s", novo);
	return 0;
}
