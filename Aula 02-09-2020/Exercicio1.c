/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
int		cont = 0;
float	base = 0;
float	altura = 0;
float	area = 0;

void novaFuncao() {
	printf ("teste");
}

/* Corpo do Programa */
int main()
{
	setlocale (LC_ALL, "portuguese");
	system ("cls");
	printf ("=============================\n");
	printf ("Cálculo de Área de Triângulos\n");
	printf ("=============================\n");
	do
	{
		printf ("\nBase: ");
		fflush (stdin);
		scanf ("%f", &base);
		printf ("\nAltura: ");
		fflush (stdin);
		scanf ("%f", &altura);
		if (base == 0 || altura == 0)
		{
			printf ("\nImpossível calcular área do triângulo!");
		}
		else
		{
			area = (base * altura) / 2;
			printf ("\nÁrea = %.2f\n", area);
			printf ("\n=============================\n");
		}
		cont++;
	}
	while (cont < 3);
	getch();
	return (0);
}
