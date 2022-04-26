#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

int homem_1,homem_2,mulher_1,mulher_2;
int mais_novo,mais_velho,mais_nova,mais_velha;
int soma, produto;
int velho, velha;

printf("\n");
printf(" Informe a idade do primeiro Homem: ");
scanf("%d",&homem_1);
printf("\n");

printf(" Informe a idade do segundo Homem: ");
scanf("%d",&homem_2);
printf("\n");

printf(" Informe a idade da primeira Mulher: ");
scanf("%d",&mulher_1);
printf("\n");

printf(" Informe a idade da segunda Mulher: ");
scanf("%d",&mulher_2);
printf("\n");

if (homem_1>homem_2){
    mais_velho=homem_1;
    mais_novo=homem_2;
    velho=1;

}
else{
    mais_velho=homem_2;
    mais_novo=homem_1;
    velho=2;
}

if (mulher_1>mulher_2){
    mais_velha=mulher_1;
    mais_nova=mulher_2;
    velha=1;
}
else{
    mais_velha=mulher_2;
    mais_nova=mulher_1;
    velha =2;
}

soma=(mais_velho+mais_nova);
produto=(mais_novo*mais_velha);

printf(" A soma das idades do homem mais velho com a mulher mais nova é %.2d.", soma);
printf("\n");
printf(" O produto das idades do homem mais novo com a mulher mais velha é %.2d.", produto);
printf("\n");
printf(" O %dº homem é mais velho e a %dº mulher é mais velha.", velho, velha);
printf("\n");
printf("\n");

return 0;
}
