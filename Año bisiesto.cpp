#include <stdio.h>

int main() 
{
int a = 0;
while (1) 
{
printf("Introduzca un ano: \n");
scanf("%d", &a);
if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) 
	{
        printf("Es bisiesto\n");
        break; 
    	} 
	else 
	{
        printf("No es bisiesto\n");
    	}
}

    return 0;
}
