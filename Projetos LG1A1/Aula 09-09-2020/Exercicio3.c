/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
int		soma = 1;
int		limite;
int		resultado = 0;

/* Corpo do Programa */
int main()
{
	setlocale (LC_ALL, "portuguese");
	system ("cls");
	printf ("====================\n");
	printf ("    Soma Maluca\n");
	printf ("====================\n");
	printf ("\nInforme um número: ");
	fflush (stdin);
	scanf ("%i", &limite);
	printf ("\n====================\n\n");
	for (soma >= 0; soma <= limite; soma++)
	{
		resultado = resultado + soma;
		printf ("%i", soma);
		if (soma < limite)
		{
			printf (" + ");
		}
		else
		printf (" = %i", resultado);
	}
	getch();
	return (0);
}
