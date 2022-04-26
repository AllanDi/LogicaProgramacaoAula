#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float s;

printf("informe o salario");
scanf("%f",&s);

if (s<=500)
{
s = (s+(s/100*15));
printf("voce recebera %..2f",s);
}
else
    if ((s>500)&&(s<=1000))
    {
    s = (s+(s/100*10));
    printf("voce recebera %.2f",s);
    }
    else
        if ((s>1000))
        {
        s = (s+(s/100*5));
        printf("voce recebera %.2f",s);
        }

return 0;
}
