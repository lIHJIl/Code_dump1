#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the integers \n");
    scanf("%d %d %d",&a,&b,&c);

    //loop
    if (a>b && a>c)
        {
            printf("%d is maximum from %d and %d",a,b,c);
        }
    else if(b>c && b>a)
        {
            printf("%d is maximum from %d and %d",b,a,c);

        }
    else
        {
            printf("%d is maximum from %d and %d",c,a,b);
        }
    return 0;
}