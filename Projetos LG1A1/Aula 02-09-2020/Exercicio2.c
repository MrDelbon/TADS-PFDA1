/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
int		limite = 0;
int		multiplo = 1;
float	numero;
float	resultado;

/* Corpo do Programa */
int main()
{
	setlocale (LC_ALL, "portuguese");
	system ("cls");
	printf ("==================================\n");
	printf ("	Tabuada Automática\n");
	printf ("==================================\n");
	printf ("Insira o número desejado: ");
	fflush (stdin);
	scanf ("%f", &numero);
	printf ("==================================\n");
	do
	{
		resultado = numero * multiplo;
		printf ("%.2f * %i	= %.2f\n", numero, multiplo, resultado);
		multiplo++;
		limite++;
	}
	while (limite < 10);
	getch();
	return (0);
}
