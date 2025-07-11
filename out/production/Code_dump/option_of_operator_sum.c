#include <stdio.h>

int main()
{
    int a,b;
    int ope;
    // always take character input if available
    printf("Enter the operator from following:-(1:'+',2:'-',3:'*',4:'/')\n");
    scanf("%d",&ope);
    printf("Enter the two integers\n");
    scanf("%d %d",&a,&b);

    //the loop
    if (ope == 1)
        {
        printf("The  addition is %d ",a+b);
        }
    else if (ope ==  2)
        {
        printf("The subtration is %d",a-b);
        }
    else if (ope == 3)
        {
        printf("the multiplication is %d",a*b);
        }
    else if (ope == 4)
        {
        printf("The division is %d",a/b);
        }
    else
        {
        printf("The operator or input is wrong ^_^ ");
        }

    return 0;
}