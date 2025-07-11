#include <stdio.h>
int main()
{
    int sum,arr[100], lim;
    int *p;
    p = arr;
    printf("Enter the max no. of elements:- ");
    scanf("%d", &lim);

    // taking input
    for (int i = 0; i < lim; i++)
    {
        printf("\n Enter the %d element:- ", i + 1);
        scanf("%d", p + i);
    }
    
    // Printing array
    for (int i = 0; i < lim; i++)
    {
        printf("\n The %d element is:- %d", i + 1, *(p + i));
    }

    //taking sum
    for (int i = 0; i < lim; i++)
    {
        sum += *(p+i);
    }
    printf("\n \n %d",sum);
}