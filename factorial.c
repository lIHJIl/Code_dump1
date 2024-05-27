#include <stdio.h>
int main()
{
    int i, j=1,k;
    printf("Enter the no. req for factorial\n") ;
    scanf("%d",&i);
    k=i;
    for(;i>=2;i--)
    {
        j *= i ;
        printf("%d * ",i);

    }
    printf(" 1 = %d = %d!",j,k);
    
   return 0;
}