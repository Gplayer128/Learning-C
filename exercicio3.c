#include <stdio.h>

int main()
{
    float num = 0;
    float mult = 1;
    for(int i = 0; i < 3; i++)
    {
        printf("Escreve 3 numeros para receber o produto dos 3: \n" );
        scanf("%f", &num);
        mult = mult * num;
    }
    printf("O produto dos 3 numeros e: %.0f", mult);


    return 0;
}
