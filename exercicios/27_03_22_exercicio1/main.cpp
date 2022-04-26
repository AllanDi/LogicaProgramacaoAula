#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float n1,n2,n3,n4,m;

printf("informe a primeira nota\n");
scanf("%f",&n1);
printf("informe a segunda nota\n");
scanf("%f",&n2);
printf("informe a terceira nota\n");
scanf("%f",&n3);
printf("informe a quarta nota\n");
scanf("%f",&n4);

m = (n1+n2+n3+n4)/4;

printf("Sua média é: %0.2f\n\n", m);

return 0;
}
