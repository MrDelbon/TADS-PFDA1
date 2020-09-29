int main()
{
int n1,n2,n3,i,r;
n1 = 1;
n2 = 1;
for (i = 0; i < 20; i++)
{
	  if (i < 2)
   printf("%d ",n1);
  else
            {
   n3 = n1 + n2;
   n1 = n2;
   n2 = n3; 
   printf("%d ",n3);
            }
}
getch();
return (0);
}

