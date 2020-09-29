/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
int		valores[50];
int		i;

/* Corpo do Programa */
int main ()
{
	setlocale (LC_ALL, "");
	system ("cls");
	printf("Digite o número desejado: ");
	fflush (stdin);
	scanf ("%i", &valores[0]);
	printf("Digite o número desejado: ");
	fflush (stdin);
	scanf ("%i", &valores[1]);
	for (i = 2; i < 50; i++)
	{
		if (i % 2 == 0)
		{
			valores[i] = valores[i - 1] + valores[i - 2];
		}
		else
		{
			valores[i] = valores[i - 1] - valores[i - 2];
		}
	}
	for (i = 49; i >= 0; i--)
	{
		printf ("%i", valores [i]);
		if (i > 0)
		{
			printf (", ");
		}
		else
		{
			printf (".");
		}
	}
	getch();
	return (0);
}
