/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória [variáveis globais] */
float	numero;
float	dobro;
float	quadrado;

/* Corpo do Programa */
int main ()
{
	setlocale(LC_ALL, "");
	system("cls");
	system ("color 3f");
	printf ("====================\n");
	printf ("Dobro e Quadrado\n");
	printf ("====================\n");
	printf ("\nDe qual número você deseja saber o dobro e o quadrado?\n");
	fflush (stdin);
	scanf ("%f", &numero);
	dobro = numero * 2;
	quadrado = numero * numero;
	printf ("\nO dobro de %.2f é: %.2f", numero, dobro);
	printf ("\nO quadrado de %.2f é: %.2f", numero, quadrado);
	getch();
	return (0);

}
