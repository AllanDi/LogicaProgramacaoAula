#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

int e,h,m,s;

printf("informe a duração do evento em segundos\n");
scanf("%d",&e);

h = e / 3600;

m = e / 60;

s = e % 60;

printf("Este evento durou %d horas %d minutos %d segundos",h,m,s);

return 0;
}
