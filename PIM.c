#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void teste() {
	
}


int main() {
	
	setlocale(LC_ALL, "Portuguese");	
	
	int numDoMenu = 1;
	do {
	printf("######################################\n");
	printf("Bem vindo a RNT Locação de carros !\n");
	printf("######################################\n");
	printf("MENU:\n");
	printf("1 - Reserve um veículo\n");
	printf("2 - Conheça nossa frota!\n");
	printf("3 - Fidelidade\n");
	printf("4 - Sobre nós\n");
	printf("5 - Localização\n");
	printf("6 - Contato\n");
	printf("0 - Sair\n");
	printf("Digite o número de acordo com a opção que deseja: ");
	scanf("%d", &numDoMenu);
	
	
	switch(numDoMenu) {
		case 0:
			system("cls || clear");
			printf("Sair");
			numDoMenu = 0;
			break;
		case 1:
			system("cls || clear");
			printf("Reserve um veículo\n");
			numDoMenu = 0;
			break;
		case 2:
			system("cls || clear");
			printf("Conheça nossa frota!\n");
			numDoMenu = 0;
			break;
		case 3:
			system("cls || clear");
			printf("Fidelidade\n");
			numDoMenu = 0;
			break;
		case 4:
			system("cls || clear");
			printf("Sobre nós\n");
			numDoMenu = 0;
			break;
		case 5:
			system("cls || clear");
			printf("Localização\n");
			numDoMenu = 0;
			break;
		case 6:
			printf("Contato\n");
			numDoMenu = 0;
			system("cls || clear");
			break;
		default:
			system("cls || clear");
			numDoMenu = 0;
			printf("Digite um número válido!\n");
			numDoMenu = 1;			
	}
	} while(numDoMenu);
	return 0;
}


