#include <stdio.h>
int main()
{
    int rem, rev,num,tmp;
    printf("Enter the number :- ");
    scanf("%d",&num);
    tmp =num;
    while(num>0)
    {
        rem=num%10;
        rev =rem+(rev*10);
        num /= 10;
    }
    if(rev==tmp)
    {
        printf("The no. palindrome no.coz %d = %d ",rev,tmp);              
    }
    else
    {
        printf("The no. not palindrome no.coz %d != %d ",rev,tmp);
    }
    

   




   return 0;
}