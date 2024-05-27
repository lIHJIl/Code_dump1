#include <stdio.h> <stdlib.h>

int mul(int i,int j)
{
    return i*j;
}
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf(" %d %d",&x,&y);
    printf("The product of %d and %d is %d",x,y,mul(x,y));

    return 0;
} 