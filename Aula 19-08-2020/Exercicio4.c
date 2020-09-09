/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória [variáveis globais] */
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
	printf ("\nQual temperatura você deseja transformar de Celsius para Fahrenheit?\n");
	fflush (stdin);
	scanf ("%f", &celsius);
	resultado = (celsius * 1.8) + 32;
	printf ("\n%.fºC é igual a %.2fF", celsius, resultado);
	getch();
	return (0);

}
