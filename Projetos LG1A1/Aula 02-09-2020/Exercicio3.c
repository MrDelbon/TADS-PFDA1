/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
char	d1;
char	d2;
char	d3;
char	d4;
char	d5;
char	d6;
char	d7;
char	d8;
char	d9;
char	d10;
char	d11;
int		limite = 0;
int		erro = 0;

/* Corpo do Programa */
int main ()
{
	setlocale (LC_ALL, "portuguese");
	do
	{
		system ("cls");
		printf ("Bem vindo, por favor, digite sua senha: ");
		d1 = getch();
		printf ("*");
		d2 = getch();
		printf ("*");
		d3 = getch();
		printf ("*");
		d4 = getch();
		printf ("*");
		d5 = getch();
		printf ("*");
		d6 = getch();
		printf ("*");
		d7 = getch();
		printf ("*");
		d8 = getch();
		printf ("*");
		d9 = getch();
		printf ("*");
		d10 = getch();
		printf ("*");
		d11 = getch();
		printf ("*");
		limite = limite + 1;
		erro = erro + 1;
		if (!(d1 == 'i' && d2 == 'r' && d3 == 'o' && d4 == 'n' && d5 == ' ' && d6 == 'm' && d7 == 'a' && d8 == 'i' && d9 == 'd' && d10 == 'e' && d11 == 'n'))
		{
			printf ("\n\nSenha incorreta!");
			getch();
		}
	}
	while (!(d1 == 'i' && d2 == 'r' && d3 == 'o' && d4 == 'n' && d5 == ' ' && d6 == 'm' && d7 == 'a' && d8 == 'i' && d9 == 'd' && d10 == 'e' && d11 == 'n') && limite < 3);
	if (erro == 3)
	{
		printf ("\n\nBARRADO NA ENTRADA");
	}
	else
	{
		printf ("\n\nAcesso Vip!");
	}
	getch();
	return (0);
}
