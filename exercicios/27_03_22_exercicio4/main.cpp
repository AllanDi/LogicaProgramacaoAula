#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

int id,a,m,d;

printf("informe a sua idade em dias\n");
scanf("%d",&id);

a =  id / 365;
m = (id % 365) / 30;
d = (id % 365) % 30;

printf("Voce tem %d anos, %d meses %d dias de idade",a,m,d);

return 0;
}
