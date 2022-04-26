#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float cf,cc;
int pd,i;
pd = 28;
i = 45;

printf("informe custo de fabrica\n");
scanf("%f",&cf);

cc = (((cf/100*pd))+((cf/100)*i))+cf;

printf("O valor ao consumidor é : %0.2f\n\n",cc);

return 0;
}
