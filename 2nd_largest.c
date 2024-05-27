#include <stdio.h> <stdlib.h>
int main()
{
    int a, b, c;
    printf("Enter 3 integers:  \n");
    scanf("%d %d %d", &a,&b,&c);

    //if ladder
    if (((a>b) && (a<c) )|| ((a>c) && (a<b)))
    {
        printf("%d  is second largest integer\n", a);
    }
    else if (((b>a)&&(b<c))||((b>c)&&(b<a)))
    {
        printf("%d is second largest integer\n",b);
    }
    else 
    {
        printf("%d is second largest integer\n",c);
    }
   return 0;
}