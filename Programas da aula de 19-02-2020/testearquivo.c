/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
/* Vari�veis de mem�ria */
FILE   * arq;
/* Corpo do programa */
int   main  ()
{
	arq = fopen ("TICKET.TXT","w");
	fprintf (arq, "=============================\n");
	fprintf (arq, "DRIVE THRU DO MICKEY E DONALD\n");
	fprintf (arq, "=============================\n");
	fclose(arq);
	system ("type TICKET.TXT");
}
