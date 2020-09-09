/* Biblioteca */
#include   <stdlib.h>
#include   <stdio.h>
#include   <conio.h>
#include   <locale.h>

/* Variaveis */
float      anoa;
float      anon;
float      ida;
float      idm;
float      ids;
float      idd;

/* Corpo */
int main ()
{
    setlocale (LC_ALL, "");
    system ("cls");
    printf ("Calculador de idade\n");
    printf ("Qual o ano atual?:\n");
    fflush (stdin);
    scanf  ("%f" , anoa);
    printf ("Qual o ano em que voce nasceu?:\n");
    fflush (stdin);
    scanf  ("%f" , anon);
    ida = anoa - anon;
    printf ("Idade atual: %f\n" , ida);
    idm = ida * 12;
    printf ("Idade em meses: %f\n" , idm);
    ids = idm * 4;
    printf ("Idade em semanas: %f\n" , ids);
    idd = ida * 365;
    printf ("Idade em dias: %f\n" , idd);
	return (0);
    getch ();
}
