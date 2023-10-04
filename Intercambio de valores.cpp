#include <stdio.h>

int main ()
{
int v1, v2, v3, a;
printf("dame el numero de v1:\n");
scanf ("%d", &v1);
printf("dame el numero de v2:\n");
scanf ("%d", &v2);
printf("dame el numero de v3:\n");
scanf ("%d", &v3);
a=v1;
v1=v3;
v3=v2;
v2=a;

printf("los valores contenidos en cada variable son:\n");
printf("v1: %d\n", v1);
printf("v2: %d\n", v2);
printf("v3: %d\n", v3);

return 0; 
}
