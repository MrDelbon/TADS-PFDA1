/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória [variáveis globais] */
float	salario;
float	reajuste;
char	opcao;

/* Corpo do Programa */
int main ()
{
	setlocale(LC_ALL, "");
	system("cls");
	system ("color 3f");
	printf ("====================\n");
	printf ("Reajuste Salarial\n");
	printf ("====================\n");
	printf ("\nQual o valor do salário que deseja reajustar?\n");
	fflush (stdin);
	scanf ("%f", &salario);
	do
	{
		printf ("\nVocê deseja aumentar ou diminuir o salário? [1] = Aumentar [2] = Diminuir\n");
		fflush (stdin);
		scanf ("%c", &opcao);
			if (opcao != '1' && opcao != '2')
			{
				printf ("\nOps, opção inválida, tente novamente\n");
			}
	}
	while (opcao != '1' && opcao != '2');
	if (opcao == '1')
	{
		reajuste = salario * 1.25;
		printf ("\nCom um reajuste de 25%% seu salário agora é de: R$ %.2f", reajuste);
	}
	if (opcao == '2')
	{
		reajuste = salario * 0.75;
		printf ("\nCom um reajuste de 25%% seu salário agora é de: R$ %.2f", reajuste);
	}
	getch();
	return (0);
}
