/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
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
	printf ("\nDefina quantas casas do tabuleiro serão preenchidas (máximo de 32 casas): ");
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
		printf ("\nLamento, sei que um tabuleiro tem 64 casas, mas não posso calcular um número tão grande, tente novamente.");
		getch();
		goto inicio;
	}		
	if (casas == 0 || casas >= 65)
	{
		system ("cls");
		printf ("==================\n");
		printf ("Tabuleiro do Monge\n");
		printf ("==================\n");
		printf ("\nOps, o número de casas inválido, tente novamente.");
		getch();
		goto inicio;
	}
	printf ("\n\n==================\n\n");
	printf ("O monge receberá: %lu", soma);
	getch();
	return (0);
}
