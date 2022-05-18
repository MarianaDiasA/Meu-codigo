#include<stdio.h>
#include<string.h>

int main(){
	int i=0,n=0;
	struct Aluno {
		int matricula;
		char nome[200];
		float media,nota[4],soma;
	};
	
	struct Aluno aluno[10];
	for (i=0;i<10;i++){
		printf("Informe a matricula: ");
		scanf("%d", &aluno[i].matricula);
		printf("Informe o nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		
		for(n=0;n<4;n++){
			printf("Informe a nota %d: ", n + 1);
			scanf("%f", &aluno[i].nota[n]);
			aluno[i].soma+=aluno[i].nota[n];
			aluno[i].media = aluno[i].soma/4;
		}
		printf("Soma: %.2f\n", aluno[i].soma);
		printf("Media: %.2f\n", aluno[i].media);
	}
	
	return 0;
}
