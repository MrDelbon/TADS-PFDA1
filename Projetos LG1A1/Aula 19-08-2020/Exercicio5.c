/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�vies de Mem�ria [vari�veis globais] */
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
	printf ("C�lculo de Sal�rio\n");
	printf ("====================\n");
	printf ("\nQual o valor do sal�rio bruto que deseja calcular?\n");
	fflush (stdin);
	scanf ("%f", &bruto);
	previdencia = bruto * 0.085;
	renda = (bruto - previdencia) * 0.275;
	liquido = bruto - previdencia - renda;
	printf ("\nAqui est� seu sal�rio:\n\nBruto: R$ %.2f\nPrevid�ncia: R$ %.2f\nImposto de Renda: R$ %.2f\n\nSal�rio L�quido: R$ %.2f", bruto, previdencia, renda, liquido);
	getch();
	return (0);

}
