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
	printf ("============================\n");
	printf ("Calculando M�ltiplos de Tr�s\n");
	printf ("============================\n");
	printf ("\nInforme o n�mero inicial: ");
	fflush (stdin);
	scanf ("%i", &inicio);
	printf ("\nInforme o n�mero final: ");
	fflush (stdin);
	scanf ("%i", &fim);
	printf ("\n============================\n\n");
	printf ("Os n�meros multiplos de 3 nesse intervalo s�o: ");
	for (inicio >= 0; inicio < fim; inicio++)
	{
		if (inicio % 3 == 0)
		{
			printf ("%i", inicio);
			resultado = fim - inicio;
			if	(resultado > 3)
			{
				printf (", ");
			}
			else
			printf (".");
		}
	}
	getch();
	return (0);
}
