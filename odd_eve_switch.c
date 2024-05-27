#include <stdio.h>
int main()
{
    int i;
    printf("Enter the  Number\n");
    scanf("%d",&i);
    
    switch (i%2)
    {
        case 0 :
                    printf("The number %d is Even",i);
                    break;
    
        default:
                    printf("The number %d is Odd",i);
                                               
    }
   
}