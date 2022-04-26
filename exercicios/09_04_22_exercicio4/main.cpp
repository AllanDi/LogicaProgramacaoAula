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

if ((a>b)&&(b>c))
{
printf("Ordem %d,%d,%d",c,b,a);
}
else
if ((a>c)&&(c>b))
{
printf("Ordem %d,%d,%d",b,c,a);
}
else
if ((b>a)&&(a>c))
{
printf("Ordem %d,%d,%d",c,a,b);
}
else
if ((b>c)&&(c>a))
{
printf("Ordem %d,%d,%d",a,c,b);
}
else
if ((c>a)&&(a>b))
{
printf("Ordem %d,%d,%d",b,a,c);
}
else
if ((c>b)&&(b>a))
{
printf("Ordem %d,%d,%d",a,b,c);
}

return 0;
}
