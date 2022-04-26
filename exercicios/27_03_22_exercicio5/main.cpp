#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float n1,n2,n3,m;

printf("informe a primeira nota\n");
scanf("%f",&n1);
printf("informe a segunda nota\n");
scanf("%f",&n2);
printf("informe a terceira nota\n");
scanf("%f",&n3);

m = ((n1*2)+(n2*3)+(n3*5))/(2+3+5);

printf ("Sua média é: %0.2f\n\n",m);

return 0;
}
