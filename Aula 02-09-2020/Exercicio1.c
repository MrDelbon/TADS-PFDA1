/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria */
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
	printf ("C�lculo de �rea de Tri�ngulos\n");
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
			printf ("\nImposs�vel calcular �rea do tri�ngulo!");
		}
		else
		{
			area = (base * altura) / 2;
			printf ("\n�rea = %.2f\n", area);
			printf ("\n=============================\n");
		}
		cont++;
	}
	while (cont < 3);
	getch();
	return (0);
}
