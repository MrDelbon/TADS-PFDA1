/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria [vari�veis globais] */
float	celsius;
float	resultado;

/* Corpo do Programa */
int main ()
{
	setlocale(LC_ALL, "");
	system("cls");
	system ("color 3f");
	printf ("====================\n");
	printf ("Temperatura\n");
	printf ("====================\n");
	printf ("\nQual temperatura voc� deseja transformar de Celsius para Fahrenheit?\n");
	fflush (stdin);
	scanf ("%f", &celsius);
	resultado = (celsius * 1.8) + 32;
	printf ("\n%.f�C � igual a %.2fF", celsius, resultado);
	getch();
	return (0);

}
