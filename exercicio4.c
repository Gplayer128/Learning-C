#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);
    int num;
    printf("Escreve um número para determinar se é par ou ímpar: ");
    scanf("%d", &num);
    if(num%2 == 0)
    {
        printf("O número %d é par", num);
    }
    else
    {
        printf("O número %d é ímpar", num);
    }
}