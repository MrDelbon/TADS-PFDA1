/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
int		inicio;
int		fim;
int		resultado;

/* Corpo do Programa */
int main()
{
	setlocale (LC_ALL, "portuguese");
	system ("cls");
	printf ("============================\n");
	printf ("Calculando Múltiplos de Três\n");
	printf ("============================\n");
	printf ("\nInforme o número inicial: ");
	fflush (stdin);
	scanf ("%i", &inicio);
	printf ("\nInforme o número final: ");
	fflush (stdin);
	scanf ("%i", &fim);
	printf ("\n============================\n\n");
	printf ("Os números multiplos de 3 nesse intervalo são: ");
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
