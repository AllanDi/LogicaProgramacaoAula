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

printf("%s Voc� tem %.0f anos, \n %s Voc� tem %.0f anos, \n e a m�dia de idade de voc�s � %0.1f anos \n\n", n1,i1,n2,i2,m);

return 0;
}
