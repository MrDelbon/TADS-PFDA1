/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria */
int		inicio;
int		fim;
int		resultado;

/* Corpo do Programa */
int main()
{
	setlocale (LC_ALL, "portuguese");
	system ("cls");
	printf ("====================\n");
	printf ("Calculando Quadrados\n");
	printf ("====================\n");
	printf ("\nInforme o n�mero inicial: ");
	fflush (stdin);
	scanf ("%i", &inicio);
	printf ("\nInforme o n�mero final: ");
	fflush (stdin);
	scanf ("%i", &fim);
	printf ("\n===================\n\n");
	printf ("Os quadrados de todos os n�meros nesse intervalo s�o: ");
	for (inicio >= 0; inicio <= fim; inicio++)
	{
		resultado = inicio * inicio;
		printf ("%i", resultado);
		if (inicio < fim)
		{
			printf (", ");
		}
		else
		printf (".");
	}
	getch();
	return (0);
}
