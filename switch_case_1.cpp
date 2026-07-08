#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//titulo
	printf("\n___________________\n");
	printf("| CALCULADORA V.3 |\n");
	printf("-------------------\n");
	
	char sel;	
	do {

		int opr;
		do {
			printf("\nQual operacao matematica deseja realizar?\n\n1- Adicao\n2- Subtracao\n3- Divisao\n4- Multiplicacao\n\nSelecione (1, 2, 3, 4): ");
			//declaracao de variavel para o switch
			scanf("%d", &opr);
			
			if (opr < 1 || opr > 4) {
				printf("\nDigite um numero entre 1 a 4!!!\n");
			}
			
		} while (opr < 1 || opr > 4);
		//declaracao de variaveis das operacoes
		float a, b, c;
		printf("\nDigite o PRIMEIRO valor: ");
		scanf("%f", &a);
		printf("\nDigite o SEGUNDO valor: ");
		scanf("%f", &b);
		
		switch (opr) {
			case 1:
				(c=a+b);
				break;
			case 2:
				(c=a-b);
				break;
			case 3:
				(c=a/b);
				break;
			case 4:
				(c=a*b);
				break;
		}
		printf("\nRESULTADO DA OPERACAO: %.2f", c);
		
		do {
			printf("\n\nDeseja reiniciar o calculo? (s/n): ");
			scanf(" %c", &sel);
			
			if (sel != 's' && sel != 'n') {
			printf("\nDigite >>s<< ou >>n<<");
			}
		} while (sel != 's' && sel != 'n');
		
	} while (sel == 's');
	
	printf("\nObrigado por usar meu programa!\n\n");
	
	system("pause");
	return 0;
}
