#include <stdio.h>
#include <stdlib.h>
int facto(int);
int main()
{
    int num;
    printf("Enter the no. :-  ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial not possible");
        exit(0);
    }
    else
    {
        int res = facto(num);
        printf("%d", res);
    }
    return 0;
}
int facto(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        if (x > 1)
        {
            printf("%d X ", x);
        }
        else
        {
            printf("%d = ", x);
        }
        return x * facto(x - 1);
    }
}