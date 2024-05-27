#include <stdio.h>
int main()
{
    int arr[100], i, lim, num, flag = 0;
    printf("Enter the limit of numbers: ");
    scanf("%d", &lim);
    for (i = 0; i < lim; i++)
    {
        printf("Enter the %d no. : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the no. you want to search ");
    scanf("%d", &num);
    for (i = 0; i < lim; i++)
    {
        if (arr[i] == num)
        {

            printf("The %d found at location %d\n", num, i + 1);
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("The number %d not found", num);
    }
    else
    {
        printf("%d found %d times", num, flag);
    }

    return 0;
}