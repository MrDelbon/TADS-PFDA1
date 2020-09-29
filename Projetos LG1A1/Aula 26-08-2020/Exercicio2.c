/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*Variaveis Globais*/
int		homem;
int		mulher;
char	opcao;
float	altura;
float	resultado;

/*Corpo do Programa*/
int main()
{
	setlocale (LC_ALL, "");
	system ("cls");
	system ("color 3f");
	printf ("=====================\n");
	printf ("Calculo do Peso Ideal\n");
	printf ("=====================\n");
	printf ("\nQual a sua altura?\n");
	fflush (stdin);
	scanf ("%f", &altura);
	do
	{
		system ("cls");
		printf ("=====================\n");
		printf ("Calculo do Peso Ideal\n");
		printf ("=====================\n");
		printf ("\nVocê é homem ou mulher? [1] = Homem [2] = Mulher\n");
		fflush (stdin);
		scanf ("%c", &opcao);
			if (opcao != '1' && opcao != '2')
			{
				system ("cls");
				printf ("=====================\n");
				printf ("Calculo do Peso Ideal\n");
				printf ("=====================\n");
				printf ("\nOps, opção inválida, tente novamente\n");
				getch();
			}
	}
	while (opcao != '1' && opcao != '2');
	if (opcao == '1')
	{
		resultado = (72.7 * altura) - 58;
		system ("cls");
		printf ("=====================\n");
		printf ("Calculo do Peso Ideal\n");
		printf ("=====================\n");
		printf ("\nSeu peso ideal é: %.2f", resultado);
	}
	if (opcao == '2')
	{
		resultado = (62.1 * altura) - 44.7;
		system ("cls");
		printf ("=====================\n");
		printf ("Calculo do Peso Ideal\n");
		printf ("=====================\n");
		printf ("\nSeu peso ideal é: %.2f", resultado);
	}
	getch();
	return (0);
}

