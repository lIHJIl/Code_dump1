#include <stdio.h> <stdlib.h>
int main()
{
    int i,mul=1,result;
    printf("Enter the number\n");
    scanf("%d",&i);

    while(mul<=10)
    {
        result=mul*i;
        printf("%d * %d = %d\n",i,mul,result);
        mul++;

    }

   return 0;
}