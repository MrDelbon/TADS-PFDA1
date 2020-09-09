/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória [variáveis globais] */
float	bruto;
float	previdencia;
float	renda;
float	liquido;

/* Corpo do Programa */
int main ()
{
	setlocale(LC_ALL, "");
	system("cls");
	system ("color 3f");
	printf ("====================\n");
	printf ("Cálculo de Salário\n");
	printf ("====================\n");
	printf ("\nQual o valor do salário bruto que deseja calcular?\n");
	fflush (stdin);
	scanf ("%f", &bruto);
	previdencia = bruto * 0.085;
	renda = (bruto - previdencia) * 0.275;
	liquido = bruto - previdencia - renda;
	printf ("\nAqui está seu salário:\n\nBruto: R$ %.2f\nPrevidência: R$ %.2f\nImposto de Renda: R$ %.2f\n\nSalário Líquido: R$ %.2f", bruto, previdencia, renda, liquido);
	getch();
	return (0);

}
