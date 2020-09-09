/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória [variáveis globais] */
float	altura;
float	raio;
float	volume;

/* Corpo do Programa */
int main ()
{
	setlocale(LC_ALL, "");
	system("cls");
	system ("color 3f");
	printf ("====================\n");
	printf ("Cálculo de Volume\n");
	printf ("====================\n");
	printf ("\nQual a altura do objeto?\n");
	fflush (stdin);
	scanf ("%f", &altura);
	printf ("\nQual o raio do objeto?\n");
	fflush (stdin);
	scanf ("%f", &raio);
	volume = 3.14159 * (raio * raio) * altura;
	printf ("\nVolume é: %.2f", volume);
	getch();
	return (0);

}
