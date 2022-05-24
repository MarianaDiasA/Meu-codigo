#include <stdio.h>
#include <stdlib.h>


int main() {
	char nome[200],assinatura[20],resposta[3],razaoSocial[30],endereco[20],bairro[80],comple[80],estado[20],cidade[20],email[30],cnpj[20],cpf[20];
	int veiculos,diaNasci,diaAtual,mesNasci,mesAtual,anoNasci,anoAtual,numero,inscEst,inscMuni,cep,ddd,telefoneRes,telefoneCelu,cnae,contato,telefoneCome;
	int x;
	char nasci[15],data[15];
	printf("DADOS DO CREDENCIADO\n\n");
	
	printf("informe seu nome: ");
	scanf("%[^\n]s", &nome);
	fflush(stdin);
	printf("informe sua razao social: ");
	scanf("%[^\n]s", &razaoSocial);
	fflush(stdin);
	printf("informe seu endereco: ");
	scanf("%[^\n]s", &endereco);
	fflush(stdin);
	printf("informe o numero: ");
	scanf("%d", &numero);
	fflush(stdin);
	printf("informe o complemento: ");
	scanf("%[^\n]s", &comple);
	fflush(stdin);
	printf("informe o bairro: ");
	scanf("%[^\n]s", &bairro);
	fflush(stdin);
	printf("informe seu cep: ");
	scanf("%d", &cep);
	fflush(stdin);
	printf("informe o Estado: ");
	scanf("%[^\n]s", &estado);
	fflush(stdin);
	printf("informe a cidade: ");
	scanf("%[^\n]s", &cidade);
	fflush(stdin);
	printf("informe o ddd: ");
	scanf("%d", &ddd);
	fflush(stdin);
	printf("informe o telefone residencial ou comercial: ");
	scanf("%d", &telefoneRes);
	fflush(stdin);
	printf("informe o telefone celular: ");
	scanf("%d", &telefoneCelu);
	fflush(stdin);
	printf("informe seu CPF: ");
	scanf("%s", &cpf);
	fflush(stdin);
	printf("informe seu CNPJ(Preenchimento exclusivo para PJ): ");
	scanf("%s", &cnpj);
	fflush(stdin);
	printf("informe a Insc.Estadual(Preenchimento exclusivo para PJ): ");
	scanf("%d", &inscEst);
	fflush(stdin);
	printf("informe a Insc.Municipal(Preenchimento exclusivo para PJ): ");
	scanf("%d", &inscMuni);
	fflush(stdin);
	printf("informe o CNAE(Preenchimento exclusivo para PJ): ");
	scanf("%d", &cnae);
	fflush(stdin);
	printf("informe sua data de nascimento: ");
	scanf("%d/%d/%d", &diaNasci,&mesNasci,&anoNasci);
	fflush(stdin);
	printf("Deseja receber os proximos boletos por e-mail?(sim/nao): ");
	scanf("%s", &resposta);
	fflush(stdin);
	printf("informe seu e-mail: ");
	scanf("%s", &email);
	fflush(stdin);
	printf("informe o contato de responsavel(em caso de Pessoa Juridica): ");
	scanf("%d", &contato);
	fflush(stdin);
	printf("informe o telefone comercial: ");
	scanf("%d", &telefoneCome);
	fflush(stdin);
	printf("informe a data: ");
	scanf("%d/%d/%d", &diaAtual,&mesAtual,&anoAtual);
	fflush(stdin);
	printf("assinatura do responsavel: ");
	scanf("%[^\n]s", &assinatura);
	fflush(stdin);
	
	printf("\n\nDADOS DOS VEICULOS\n\n");
	
	printf("Quantos veiculos serao utilizados? ");
	scanf("%d", &veiculos);
	char placa[7][veiculos];
	char modelo[20][veiculos];
	char cor[11][veiculos];
	int ano[veiculos];
	
	for (x=0;x<veiculos;x++){
		printf("informe a placa: ");
		scanf("%s", &placa[x]);
		printf("informe o modelo: ");
		scanf("%s", &modelo[x]);
		printf("informe o ano: ");
		scanf("%d", &ano[x]);
		fflush(stdin);
		printf("informe a cor: ");
		scanf("%[^\n]s", &cor[x]);
	}
	printf("\n\n");
	printf("SEUS DADOS\n\n");
	printf("razao social e nome completo: %s - %s\n", nome,razaoSocial);
	printf("endereco: %s \n", endereco);
	printf("numero: %d\ncomplemento: %s\nbairro: %s\n", numero,comple,bairro);
	printf("cep: %d\nestado: %s\ncidade: %s\n", cep,estado,cidade);
	printf("ddd: %d\ntelefone residencial ou comercial: %d\ntelefone celular: %d\n", ddd,telefoneRes,telefoneCelu);
	printf("cpf: %d\ncnpj: %d\n", cpf,cnpj);
	printf("insc.Estadual: %d\ninsc.Municipal: %d\n", inscEst,inscMuni);
	printf("CNAE: %d\ndata de nas.: %d/%d/%d \nreceber os proximos boletos por e-mail? %s\n", cnae,diaNasci,mesNasci,anoNasci,resposta);
	printf("e-mail: %s\n", email);
	printf("contato do responsavel: %d\ntelefone comercial: %d\n", contato,telefoneCome);
	printf("data: %d/%d/%d\nassinatura do responsavel: %s\n", diaAtual,mesAtual,anoAtual,assinatura);
	printf("\n\nDADOS DOS VEICULOS\n\n");
	for (x=0;x<veiculos;x++){
		printf("placa: %s\n", placa[x]);
		printf("modelo: %s\n", modelo[x]);
		printf("ano: %d\n", ano[x]);
		printf("cor: %s\n", cor[x]);
	}
	return 0;
}
