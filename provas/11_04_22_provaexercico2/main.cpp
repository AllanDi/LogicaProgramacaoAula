#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


int main ()
{
setlocale(LC_ALL, "Portuguese");

float valor_g, valor_a, quantidade_lt, valor_desconto, valor_total, valor_compra;
int tipo_combustivel;

printf("\n");
printf(" Informe o tipo de combustivel \n A:1 Alcool G:2 Gasolina: ");
scanf("%d",&tipo_combustivel);
printf("\n");
printf(" Informe o total de litros abastecidos: ");
scanf("%f",&quantidade_lt);
printf("\n");


valor_a=4.90;
valor_g=6.30;

if ((tipo_combustivel==1)&&(quantidade_lt<=20)){
    valor_desconto=(((valor_a*quantidade_lt)/100)*3);
    valor_compra=(valor_a*quantidade_lt);
}
else
if ((tipo_combustivel==2)&&(quantidade_lt<=20)){
    valor_desconto=(((valor_g*quantidade_lt)/100)*4);
    valor_compra=(valor_g*quantidade_lt);
}
else
if ((tipo_combustivel==1)&&(quantidade_lt>20)){
    valor_desconto=(((valor_a*quantidade_lt)/100)*5);
    valor_compra=(valor_a*quantidade_lt);
}
else{
    valor_desconto=(((valor_g*quantidade_lt)/100)*6);
    valor_compra=(valor_g*quantidade_lt);
}

valor_total=(valor_compra-valor_desconto);

    printf(" Você deverá pagar R$: %.2f já aplicado um desconto de R$: %.2f", valor_total, valor_desconto);
    printf("\n");
    printf("\n");


return 0;
}
