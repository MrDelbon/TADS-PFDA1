/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

/*Variaveis Globais*/
char	senha1;
char	senha2;
char	senha3;
char	senha4;
char	opcao;
float	saldo = 0;
float	deposito;
float	pagamento;
float	transferencia;
float	valoratual;
int		timer = 0;

/*Corpo do Programa*/
int main ()
{
	inicio:
	setlocale (LC_ALL, "");
	system ("cls");
	system ("color 3f");
	printf ("Bem vindo, por favor, digite sua senha: \n");
	senha1 = getch();
	printf ("*");
	senha2 = getch();
	printf ("*");
	senha3 = getch();
	printf ("*");
	senha4 = getch();
	printf ("*");
	if (senha1 == '1' && senha2 == '3' && senha3 == '1' && senha4 == '0')
	{
		menu:
		system ("cls");
		printf ("====================\n");
		printf ("a = saldo\n");
		printf ("b = depósito\n");
		printf ("c = pagamentos\n");
		printf ("d = transferências\n");
		printf ("e = sair\n");
		printf ("====================\n");
		opcao = getch();
		switch (opcao)
		{
			case 'a': case 'A':
			{
				system ("cls");				
				printf ("====================\n");
				printf ("Operação : saldo\n");
				printf ("====================\n");
				printf ("\nSaldo atual: R$%.2f", saldo);
				getch ();
				goto menu;
			}
			
			case 'b': case 'B':
			{
				system ("cls");				
				printf ("===================\n");
				printf ("Operação : depósito\n");
				printf ("===================\n");
				printf ("\nInforme o valor a ser depositado: ");
				fflush (stdin);
				scanf ("%f", &valoratual);
				saldo = saldo + valoratual;
				system ("cls");
				printf ("\nValor depositado com sucesso!");
				valoratual = 0;
				getch ();
				goto menu;
			}
			
			case 'c': case 'C':
			{
				system ("cls");				
				printf ("=====================\n");
				printf ("Operação : pagamentos\n");
				printf ("=====================\n");
				printf ("\nInforme o valor do pagamento: ");
				fflush (stdin);
				scanf ("%f", &valoratual);
				
				if (valoratual > saldo)
				{
					system ("cls");
					printf ("\nOps, você não possui saldo suficiente, realize um depósito e tente novamente.");
					getch ();
					goto menu;
				}
				
				else
					system ("cls");
					saldo = saldo - valoratual;
					printf ("\nPagamento realizado com sucesso!");
					valoratual = 0;
					getch ();
					goto menu;
			}
			
			case 'd': case 'D':
			{
				system ("cls");
				printf ("==========================\n");
				printf ("Operação : transferências\n");
				printf ("==========================\n");
				printf ("\nInforme o valor da transferência: ");
				fflush (stdin);
				scanf ("%f", &valoratual);
			
				if (valoratual > saldo)
				{
					system ("cls");
					printf ("\nOps, você não possui saldo suficiente, realize um depósito e tente novamente.");
					getch ();
					goto menu;
				}
				
				else
					system ("cls");
					saldo = saldo - valoratual;
					printf ("\nTransferência realizada com sucesso!");
					valoratual = 0;
					getch ();
					goto menu;
			}
			
			case 'e': case 'E':
				system ("cls");
				printf ("\nEncerrando operações");
				for (timer > 0; timer < 3; timer++)
				{
					printf (".");
					sleep (1);
				}
			break;
			
			default : printf ("\nOpção inválida!\n");
			getch();
			goto menu;
		}
	}
	else
	{
		system ("cls");
		printf ("Senha invalida, tente novamente\n");
		getch ();
		goto inicio;
	}
	return (0);
}
