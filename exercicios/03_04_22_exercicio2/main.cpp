#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");

float n1,n2,n3,n4,qn1,qn2,qn3,qn4;

printf("informe o valor do 1º numero");
scanf("%f",&n1);

printf("informe o valor do 1º numero");
scanf("%f",&n2);

printf("informe o valor do 1º numero");
scanf("%f",&n3);

printf("informe o valor do 1º numero");
scanf("%f",&n4);

qn1 = pow (n1,2);
qn2 = pow (n2,2);
qn3 = pow (n3,2);
qn4 = pow (n4,2);

    if (qn3 >= 1000)
    {
            printf("quadrado de %0.0f é maior que 1000 valendo %0.0f",n3,qn3);
    }
    else
    {
            printf("Os quadrados são respectivos %0.2f,%0.2f %0.2f,%0.2f %0.2f,%0.2f %0.2f,%0.2f",n1,qn1,n2,qn2,n3,qn3,n4,qn4);
    }

return 0;
}
