/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria */
unsigned long int	base;
int					limite;
int					casas;
int					soma = 0;
/* Corpo do Programa */
int main()
{
	inicio:
	limite;
	base = 0;
	setlocale (LC_ALL, "portuguese");
	system ("cls");
	printf ("==================\n");
	printf ("Tabuleiro do Monge\n");
	printf ("==================\n");
	printf ("\nDefina quantas casas do tabuleiro ser�o preenchidas (m�ximo de 32 casas): ");
	fflush (stdin);
	scanf ("%i", &casas);
	for (limite = 0; limite < casas; limite++)
	{
		base = base * 2;
		if (base == 0)
		{
			base++;
		}
		soma = soma + base;
	}
	if (casas > 32 && casas <= 64)
	{
		system ("cls");
		printf ("==================\n");
		printf ("Tabuleiro do Monge\n");
		printf ("==================\n");
		printf ("\nLamento, sei que um tabuleiro tem 64 casas, mas n�o posso calcular um n�mero t�o grande, tente novamente.");
		getch();
		goto inicio;
	}		
	if (casas == 0 || casas >= 65)
	{
		system ("cls");
		printf ("==================\n");
		printf ("Tabuleiro do Monge\n");
		printf ("==================\n");
		printf ("\nOps, o n�mero de casas inv�lido, tente novamente.");
		getch();
		goto inicio;
	}
	printf ("\n\n==================\n\n");
	printf ("O monge receber�: %lu", soma);
	getch();
	return (0);
}
