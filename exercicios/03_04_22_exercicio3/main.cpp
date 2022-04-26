#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

int a,b,c;

printf("informe o valor do A");
scanf("%d",&a);

printf("informe o valor do B");
scanf("%d",&b);

printf("informe o valor do C");
scanf("%d",&c);

if ((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
{
    if ((a==b)&&(b==c))
    {
    printf("Triangulo equilatero");
    }
    else
    {
        if ((a!=b)&&(b!=c)&&(c!=a))
        {
        printf("Triangulo escaleno");
        }
        else
        {
        printf("Triangulo isosceles");
        }
    }
}
else
{
printf("Não é um triangulo");
}

return 0;
}
