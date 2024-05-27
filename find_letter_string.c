#include <stdio.h> <stdlib.h>
int main()
{
   int flag = 0;
   char ser, name[100];
   printf("Enter the letter you want to search\n");
   scanf("%c", &ser);
   printf("Enter the string\n");
   scanf("%s",&name);

   for (int i=0; name[i] != '\0'; i++)
   {
      if (name[i] == ser)
      {
         printf("The %c found at %d location\n", ser, i + 1);
         flag++;
      }
   }
   if (flag == 0)
   {
      printf("%c not found in given string\n", ser);
   }
   else
   {
      printf("%c found %d times\n", ser, flag);
   }

   return 0;
}