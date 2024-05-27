#include <stdio.h> <stdlib.h>
int main()
{
    int num,flag=0,i=2;
    printf("Enter the no. :- ");
    scanf("%d",&num);
    if (num>=2 && num<99999999999)
    {
         while (i<num)
        {
        if(num%i==0)
        {
            flag=1;
            break;
        }
        i++;
        }
        if (flag==0)
        {
            printf("%d is a prime number",num);
        }
        else
        {
            printf("%d is not a prime number",num);
        }
    }
    else
    {
        printf("The number entered is either 0,1 or a negative no. or past the limit of 9 digits" );
    }
    
    
    return 0;
}