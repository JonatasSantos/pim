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
	printf("Bem vindo a RNT Loca��o de carros !\n");
	printf("######################################\n");
	printf("MENU:\n");
	printf("1 - Reserve um ve�culo\n");
	printf("2 - Conhe�a nossa frota!\n");
	printf("3 - Fidelidade\n");
	printf("4 - Sobre n�s\n");
	printf("5 - Localiza��o\n");
	printf("6 - Contato\n");
	printf("0 - Sair\n");
	printf("Digite o n�mero de acordo com a op��o que deseja: ");
	scanf("%d", &numDoMenu);
	
	
	switch(numDoMenu) {
		case 0:
			system("cls || clear");
			printf("Sair");
			numDoMenu = 0;
			break;
		case 1:
			system("cls || clear");
			printf("Reserve um ve�culo\n");
			numDoMenu = 0;
			break;
		case 2:
			system("cls || clear");
			printf("Conhe�a nossa frota!\n");
			numDoMenu = 0;
			break;
		case 3:
			system("cls || clear");
			printf("Fidelidade\n");
			numDoMenu = 0;
			break;
		case 4:
			system("cls || clear");
			printf("Sobre n�s\n");
			numDoMenu = 0;
			break;
		case 5:
			system("cls || clear");
			printf("Localiza��o\n");
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
			printf("Digite um n�mero v�lido!\n");
			numDoMenu = 1;			
	}
	} while(numDoMenu);
	return 0;
}


