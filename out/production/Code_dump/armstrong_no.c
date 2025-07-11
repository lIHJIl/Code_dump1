#include <stdio.h>

int main() 
{
    int n, i, rem, sum = 0;
    printf("Enter the no. ");
    scanf("%d",&n);
    i=n;
        while (n > 0)
        {
            rem = n % 10;
            sum += rem * rem * rem;
            n /= 10;
        }

        if (sum == i) {
            printf("%d is an Armstrong number.\n", i);
        }
        else 
        {
            printf("%d is not an Armstrong number.\n", i);
        }
    

    return 0;
}