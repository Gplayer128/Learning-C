#include <stdio.h>

int main()
{
    bool maior;
    int idade;
    printf("Qual e a tua idade: ");
    scanf("%d", &idade);
    maior = (idade >= 18)?true : false;
    
    if(maior)
    {
        printf("Tu es maior de idade");
    }
    else
    {
        printf("Tu es menor de idade");
    }

    return 0;
}