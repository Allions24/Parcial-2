#include <stdio.h>

int main ()
{
int a=0;
printf("Intruduzca un ano: \n");
scanf("%d", &a);
if ( (a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0 ))
	{
	printf("es bisiesto");
	}
else 
	{
	printf("No es bisiesto");
	}
return 0 ;

}
