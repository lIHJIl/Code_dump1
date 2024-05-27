#include <stdio.h>

int main ()

{
    int a,b;
    char ope;
    // always take character input if available
    printf("Enter the operator from following:-(+,-,*,/)\n");
    scanf("%c",&ope);
    printf("Enter the two integers\n");
    scanf("%d %d",&a,&b);

    //the loop
    if (ope == '+')
        {
        printf("The  addition is %d ",a+b);
        }
    else if (ope ==  '-')
        {
        printf("The subtration is %d",a-b);
        }
    else if (ope == '*')
        {
        printf("the multiplication is %d",a*b);
        }
    else if (ope == '/')
        {
        printf("The division is %d",a/b);
        }
    else
        {
        printf("The operator or input is wrong ^_^ ");
        }

    return 0;

}