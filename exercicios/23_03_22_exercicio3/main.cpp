#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

char n1[30],n2[30];
float i1,i2,m;

printf("informe o primeiro nome\n");
fgets(n1, 30, stdin);

printf("idade\n");
scanf("%f",&i1);
getchar();

printf("informe o segundo nome\n");
fgets(n2, 30, stdin);

printf("idade\n");
scanf("%f",&i2);

m = (i1+i2)/2;

printf("%s Você tem %.0f anos, \n %s Você tem %.0f anos, \n e a média de idade de vocês é %0.1f anos \n\n", n1,i1,n2,i2,m);

return 0;
}
