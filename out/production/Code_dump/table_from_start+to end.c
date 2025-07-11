#include <stdio.h> <stdlib.h>
int main()
{

    int lim,him,res,i;
    printf("Enter the Lower limit and Upper limit  \n");
    scanf("%d %d",&lim,&him);

    while (lim<=him)
    {
        i=1;
        while (i<=10)
        {
            res=lim*i;
            printf("%d * %d = %d\n",lim,i,res);
            i++;
        }
        printf("~~~~~~~~~~~~~~~~\n");
        lim++;
    }
    
   return 0;
}