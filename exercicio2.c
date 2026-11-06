#include <stdio.h>

int main()
{
    float peso;
    float soma = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Qual e o peso da pessoa %d : ", i + 1);
        scanf("%f", &peso );
        soma += peso;
    }

    printf("A media das 10 alturas e: %.2f", soma / 10);
    return 0;
}