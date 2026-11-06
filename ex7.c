#include <stdio.h>

int main()
{
    int num = 10;
    int soma = 0;

    while(num != 0)
    {
        soma = soma + num;
        num--;
    }
    printf("A soma de todos os numeros entre 1 e 10 e igual a: %d", soma);

    return 0;
}