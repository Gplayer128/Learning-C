#include <stdio.h>

int main()
{
    float alt;
    float soma = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("Qual e a altura da pessoa %d : ", i + 1);
        scanf("%f", &alt );
        soma = soma + alt;
        //soma += alt;
    }
    printf("A media da altura das 5 pessoas e: %.2f", soma / 5);

    return 0;
}