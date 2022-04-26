#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float s;
int nf;

printf("informe o numero do funcionario");
scanf("%d",&nf);

printf("informe o valor do salario");
scanf("%f",&s);

if (s<=400)
{
s = (s+(s/100*15));
printf("%d voce recebera %.0f",nf,s);
}
else
    if ((s>400)&&(s<=700))
    {
    s = (s+(s/100*12));
    printf("%d voce recebera %.0f",nf,s);
    }
    else
        if ((s>700)&&(s<=1000))
        {
        s = (s+(s/100*10));
        printf("%d voce recebera %.0f",nf,s);
        }
        else
            if ((s>1000)&&(s<=1800))
            {
            s = (s+(s/100*7));
            printf("%d voce recebera %.0f",nf,s);
            }
            else
                if ((s>1800)&&(s<=2500))
                {
                s = (s+(s/100*4));
                printf("%d voce recebera %.0f",nf,s);
                }
                else
                    if (s>2500)
                    {
                    printf("%d voce recebera %.0f",nf,s);
                    }


return 0;
}
