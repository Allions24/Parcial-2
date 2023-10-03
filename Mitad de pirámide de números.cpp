#include<stdio.h>

int main()
{
int  i, j, lineas;
printf("Numero de lineas en la piramide:\n");
scanf("%d", &lineas);
for (i=0; i<=lineas; i++)
{
	for (j=1; j<=i; j++)
	{
		printf("%d ", j);
	}
printf("\n");
}
return 0; 	
}
