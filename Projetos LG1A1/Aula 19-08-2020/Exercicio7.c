/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória [variáveis globais] */
float	aniversario;
float	data;
float	idade;
float	meses;
float	dias;
float	semanas;

/* Corpo do Programa */
int main ()
{
	setlocale(LC_ALL, "");
	system("cls");
	system ("color 3f");
	printf ("====================\n");
	printf ("Cálculo de Idade\n");
	printf ("====================\n");
	printf ("\nQuando é o ano do seu aniversário?\n");
	fflush (stdin);
	scanf ("%f", &aniversario);
	printf ("\nEm que ano estamos?\n");
	fflush (stdin);
	scanf ("%f", &data);
	idade = data - aniversario;
	meses = idade * 12;
	semanas = idade * 52;
	dias = idade * 365;
	printf ("\nSua idade é:\n\nEm anos:	%.f\nEm meses:	%.f\nEm semanas:	%.f\nEm dias:	%.f", idade, meses, semanas, dias);
	getch();
	return (0);

}
