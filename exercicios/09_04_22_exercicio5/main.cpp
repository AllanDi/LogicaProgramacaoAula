#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

int sh,ht,qf,sb;
float sf,st;

printf("informe salario por hora: ");
scanf("%d",&sh);

printf("informe horas trabalhadas: ");
scanf("%d",&ht);

printf("informe filhos menores de 14 anos: ");
scanf("%d",&qf);

sb = (ht*sh);
sf = 1;
st = 0;

if (sb<=500)
{
sf = (qf*10.50);
st = (sf+sb);
printf("salario bruto %d salario familia %.2f sendo um total de %.2f",sb,sf,st);
}
else
    if ((sb>500)&&(sb<=1000))
    {
    sf = (qf*6.50);
    st = (sf+sb);
    printf("salario bruto %d salario familia %.2f sendo um total de %.2f",sb,sf,st);
    }
    else
        if (sb>1000)
        {
        sf = (qf*1.50);
        st = (sf+sb);
        printf("salario bruto %d salario familia %.2f",sb,sf);
        }

return 0;
}
