#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,menor,maior;


    printf ("\nDigite o primeiro numero para iniciar a comparacao:");
    scanf ("%d",&n1);

    printf ("\nDigite o segundo numero para iniciar a comparacao:");
    scanf ("%d",&n2);

    printf ("\nDigite o terceiro numero para iniciar a comparacao: ");
    scanf ("%d",&n3);

    maior = menor = n1;

    if (n2<menor)
    {
        menor = n2;
    }
    if (n2>maior)
    {
        maior = n2;
    }
    if (n3<menor)
    {
        menor = n3;
    }
    if (n3>maior)
    {
        maior = n3;
    }
    printf("O maior numero eh: %d",maior);
    printf("\nO menor numero eh:%d",menor);

 return 0;
    }
