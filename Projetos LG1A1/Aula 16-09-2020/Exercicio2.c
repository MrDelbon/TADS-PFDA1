/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria */
float	quad[10];
int		num;
int		ctrl;
int		ctrl2;

/* Corpo do Programa */
int main()
{
	setlocale (LC_ALL, "");
	system ("cls");
	printf ("============================\n");
	printf ("Vetores quadrados\n");
	printf ("============================\n");
	for (ctrl = 0; ctrl < 10; ctrl++)
	{
		printf("Digite o n�mero desejado: ");
		fflush (stdin);
		scanf ("%i", &num);
		num = num * num;
		quad[ctrl] = num;
	}
	system ("cls");
	printf ("============================\n");
	printf ("Vetores quadrados\n");
	printf ("============================\n");
	printf ("O quadrado desses n�meros s�o:\n");
	for (ctrl2 = 0; ctrl2 < 10; ctrl2++)
	{
		printf ("\n%i�	= [%.f]", ctrl2 + 1, quad[ctrl2]);
	}
	getch();
	return (0);
}
