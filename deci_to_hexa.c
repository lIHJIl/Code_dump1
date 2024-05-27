#include <stdio.h> <stdlib.h>

int main()
{
    int rem, arr[100], dec, i,j;
    printf("Enter the decimal number : ");
    scanf("%d", &dec);
    j=dec;

    for (i = 0; dec > 0; i++)
    {
        rem = dec % 16;
        arr[i] = rem;
        dec = dec / 16;
    }
    printf("The hexadecimal number of %d is : ", j);
    for (i -= 1; i >= 0; i--)
    {
        if (arr[i] > 9)
        {
            printf("%c", arr[i] + 55);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }

    return 0;
}