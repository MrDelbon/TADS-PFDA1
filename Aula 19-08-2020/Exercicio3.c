/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria [vari�veis globais] */
float	base;
int		expoente;
int		limite = 1;
float	resultado = 0;

/* Corpo do Programa */
int main ()
{
	setlocale(LC_ALL, "");
	system("cls");
	system ("color 3f");
	printf ("====================\n");
	printf ("Pot�ncia\n");
	printf ("====================\n");
	printf ("\nInforme o n�mero da base:\n");
	fflush (stdin);
	scanf ("%f", &base);
	printf ("\nInforme o n�mero do expoente:\n");
	fflush (stdin);
	scanf ("%i", &expoente);
	resultado = base;
	
	for (limite > 0; limite < expoente; limite++)
	{
		resultado = resultado * base;
	}
	printf ("\n%.f elevado a %i � igual a: %.2f", base, expoente, resultado);
	getch();
	return (0);

}
