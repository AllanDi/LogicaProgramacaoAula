#include <stdio.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float valor_morango, valor_maca, quantidade_kgmorango, quantidade_kgmaca, valor_compra, valor_desconto, valor_total;

printf("\n");
printf("Informe a quantidade comprada em kilos de Morango: ");
scanf("%f",&quantidade_kgmorango);
printf("\n");
printf("Informe a quantidade comprada em kilos de Maça: ");
scanf("%f",&quantidade_kgmaca);
printf("\n");

if ((quantidade_kgmorango+quantidade_kgmaca)<=5){
    valor_morango=4.50;
    valor_maca=2.80;
}
else {
    valor_morango=3.20;
    valor_maca=1.80;
}

valor_compra=(valor_morango*quantidade_kgmorango)+(valor_maca*quantidade_kgmaca);

if ((((quantidade_kgmorango+quantidade_kgmaca)>8)||(valor_compra>25.00))){
        valor_desconto=((valor_compra/100*10));
}
else{
    valor_desconto=0;
}

valor_total=(valor_compra-valor_desconto);

    printf("Valor total compra: R$: %.2f ", valor_compra);
    printf("\n");
    printf("Valor do desconto: R$: %.2f ", valor_desconto);
    printf("\n");
    printf("Sua compra deu um total de: R$: %.2f ", valor_total);
    printf("\n");
    printf("Você está pagando o total de: R$%.2f por kilo de morango e R$%.2f de maçã.", valor_morango, valor_maca);
    printf("\n");
    printf("\n");
    printf("\n");


return 0;
}
