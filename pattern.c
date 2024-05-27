
#include <stdio.h> <stdlib.h>
int main()
{   
    int i,j,k,l=1;
    printf("Enter the length of pattern\n");
    scanf("%d", &k);
    
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",l);
            l++;
        }
        printf("\n");
    }
   return 0;
}
