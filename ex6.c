#include  <stdio.h>

int main()
{
    int num = 2;
    int i = 1;

    do 
    {
        printf("%2d x %2d = %2d \n", num, i, num * i);
        i++;
    } while(i < 11);

/*
    while(i < 11)
    {
        printf("%2d x %2d = %2d \n", num, i, num * i);
        i++;
    }
*/

/*
    for(int i = 1; i < 11; i++)
    {
        printf("%2d x %2d = %2d \n", num, i, num * i);
    }
*/
    return 0;
}