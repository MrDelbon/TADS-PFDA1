/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria */
float	num[10];
int		ctrl;
int		ctrl2;

/* Corpo do Programa */
int main()
{
	setlocale (LC_ALL, "");
	system ("cls");
	printf ("============================\n");
	printf ("Vetores num�ricos\n");
	printf ("============================\n");
	for (ctrl = 0; ctrl < 10; ctrl++)
	{
		printf("Digite o n�mero desejado: ");
		fflush (stdin);
		scanf ("%f", &num[ctrl]);
	}
	system ("cls");
	printf ("============================\n");
	printf ("Vetores num�ricos\n");
	printf ("============================\n");
	printf ("Os n�meros escolhidos foram:\n");
	for (ctrl2 = 0; ctrl2 < 10; ctrl2++)
	{
		printf ("\n%i�	= [%.2f]", ctrl2 + 1, num[ctrl2]);
	}
	getch();
	return (0);
}
