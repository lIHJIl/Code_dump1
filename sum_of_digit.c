#include <stdio.h> <stdlib.h>
int main()
{
    int num ,sum=0,rem ,rum=0;
    printf("enter the number:- \n");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        
    }
    printf("The sum of digit is : %d\n",sum);

    if (sum>=10)
    {
            while(sum>0)
        {
            rem=sum%10;
            rum=rum+rem;
            sum=sum/10;
            
        }
        printf("The sum of digit in single digit is : %d\n",rum);
        
    }
    return 0;
}