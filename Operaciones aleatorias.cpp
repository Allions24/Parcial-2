#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
srand(time(NULL));
int numeroaleatorio	=rand ()%5+1;
printf("el numero aleatorio es: %d\n", numeroaleatorio);

if (numeroaleatorio==1)
	{
		int numero1 = rand()%100;
		int numero2 = rand()%100;
		int resultado = numero1 + numero2;
		printf("el resultado de la suma (%d+%d) es %d\n", numero1, numero2, resultado);
	}
else if (numeroaleatorio==2)
	{
		int numero1 = rand()%100;
		int numero2 = rand()%100;
		int resultado = numero1 - numero2;
		printf("el resultado de la resta (%d-%d) es %d\n", numero1, numero2, resultado);
	}
else if (numeroaleatorio==3)	
	{
		int numero1 = rand()%20;
		int numero2 = rand()%20;
		int resultado = numero1 * numero2;
		printf("el resultado de la multiplicacion (%d*%d) es %d\n", numero1, numero2, resultado);
				
	}
else if (numeroaleatorio==4)
	{
		int numero1 = rand()%100;
		int numero2 = rand()%100;
		float resultado = numero1 / numero2;
		printf("el resultado de la division (%d/%d) es %f\n", numero1, numero2, resultado);
	}
else if (numeroaleatorio==5)
	{
		printf("El programa se termino\n");
	}

return 0;
}
