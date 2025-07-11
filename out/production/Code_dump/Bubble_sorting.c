#include <stdio.h>
int main()
{
    int i, j, arr[20], lim, max;
    printf("Enter the no . of elements:- ");
    scanf("%d", &lim);
    // taking input
    for (i = 0; i < lim; i++)
    {
        printf("Enter the %d element :- ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting :-) \n");
    for (i = 0; i < lim; i++)
    {
        printf("The %d element is %d \n ", i + 1, arr[i]);
    }
    // bubble sorting－O－
    for (i = 0; i < lim; i++)
    {
        for (j = 0; j < lim - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                max = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = max;
            }
        }
    }
    printf("\nArray after sorting ;-)\n");
    for (i = 0; i < lim; i++)
    {
        printf("The %d element is %d \n ", i + 1, arr[i]);
    }

    return 0;
}