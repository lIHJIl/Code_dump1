#include <stdio.h> <stdlib.h>

int power(int a, int b);

int main()
{
   int i, j;
   printf("Enter the no and its power:-\n ");
   scanf("%d %d", &i, &j);
   printf("The ans is %d", power(i, j));

   return 0;
}

int power(int a, int b)
{
   int c=a;
   for (int i = 1 ; i < b; i++)
   {
      a*=c;
   }
   
   return a;
}