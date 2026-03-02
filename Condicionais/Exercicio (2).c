#include <stdio.h>
#include <stdlib.h>

int main()
{
float sal,novo;
int cod;

    printf("Informe o salario: ");
    scanf("%f",&sal);

    printf("101 - 5 porcento de aumento \n");
    printf("202 - 8 porcento de aumento \n");
    printf("303 - 10 porcento de aumento \n");
    printf("Informe a opcao: ");
    scanf("%d",&cod);

    if (cod == 101)
    {
        novo = sal* 1.05;
    }

    else if (cod == 202)
    {
        novo = sal * 1.08;
    }
    else if (cod == 303)
    {
        novo = sal*1.10;
    }
    else
    {
        novo = sal *1.02;
    }
    printf("Novo salario: %.2f",novo);

    return 0;
}
