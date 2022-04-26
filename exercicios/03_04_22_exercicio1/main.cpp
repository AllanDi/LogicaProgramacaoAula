#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float vc,vd,vt,tmo,tma,vcmo,vcma,ko,ka;

printf("KG de Morango\n");
scanf("%f",&tmo);

printf("KG de Maça\n");
scanf("%f",&tma);

vcmo=0;
vcma=0;


if(tmo<=5)
{
vcmo=(4.50*tmo);
}
else
    if(tmo>5)
    {
    vcmo=(3.20*tmo);
    }
    else
        if(tma<=5)
        {
        vcma=(2.80*tma);
        }
        else
            if(tma>5)
            {
            vcma=(1.80*tma);
            }

            vc=(vcma+vcmo);

    printf("valor da compra R$%.2f \n\n\n",vc);


    if(((tmo+tma)>=8)||(vc>25))
    {
    vd=(vc/100*10);
    }

    vt=(vc-vd);

    printf("Valor do desconto: R$%.2f \n\n\n", vd);


    printf("Valor total cobrado: RS%.2f \n\n\n", vt);

    ko=(tmo/vcmo);
    ka=(tma/vcma);

    printf("Você está pagando o total de: R$%.2f por kilo de morango e R$%.2f de maçã.", ko, ka);


return 0;
}
