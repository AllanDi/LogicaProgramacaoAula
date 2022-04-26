#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float vc,vd,vt,tmo,tma,vcmo,vcma,vma,vmo;

printf("KG de Morango: ");
scanf("%f",&tmo);

printf("KG de Maça: ");
scanf("%f",&tma);

vcmo=0;
vcma=0;


if((tmo<=5)&&(tma<=5))
{
vcmo=(4.50*tmo);
vcma=(2.80*tma);
vmo=(4.50);
vma=(2.80);
}
else
    if((tmo<=5)&&(tma>5))
    {
    vcmo=(4.50*tmo);
    vcma=(1.80*tma);
    vmo=(4.50);
    vma=(1.80);
    }
    else
        if((tmo>5)&&(tma<=5))
        {
        vcmo=(3.20*tmo);
        vcma=(2.80*tma);
        vmo=(3.20);
        vma=(2.80);
        }
        else
            if((tmo>5)&&(tma>5))
            {
            vcmo=(3.20*tmo);
            vcma=(1.80*tma);
            vmo=(3.20);
            vma=(1.80);
            }

            vc=(vcma+vcmo);

    printf("valor da compra R$%.2f \n\n\n",vc);


    if(((tmo+tma)>=8)||(vc>25))
    {
    vd=((vc/100)*10);
    }

    vt=(vc-vd);

    printf("Valor do desconto: R$%.2f \n\n\n", vd);

    printf("Valor total cobrado: RS%.2f \n\n\n", vt);

    printf("Você está pagando o total de: R$%.2f por kilo de morango e R$%.2f de maçã.", vmo, vma);


return 0;
}
