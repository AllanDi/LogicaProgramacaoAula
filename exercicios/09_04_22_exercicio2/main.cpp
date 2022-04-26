#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

int a;

printf("informe o valor do seu QI");
scanf("%d",&a);

if (a<=30)
{
printf("ameba");
}
else
    if ((a>30)&&(a<=50))
    {
    printf("debil");
    }
    else
        if ((a>50)&&(a<=70))
        {
        printf("regular");
        }
        else
            if ((a>70)&&(a<=100))
            {
            printf("normal");
            }
            else
                if ((a>100)&&(a<=150))
                {
                printf("genio");
                }
                else
                printf("QI invalido");

return 0;
}
