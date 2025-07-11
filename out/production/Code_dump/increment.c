#include <stdio.h>

int main()
{
    int salary,time ;
    printf("Enter the salary and time\n");
    scanf("%d %d",&salary,&time);
    if (time>=5)
    {
        if (salary>=30000)
        {
            printf("You are eligible for the bonus\n");
            salary=salary+(salary*2/10);
            printf("Your new salary is %d\n",salary);
        }
        else if (salary>=20000 && salary<30000)
        {
            printf("You are eligible for the bonus\n");
            salary=salary+(salary*1/10);
            printf("Your new salary is %d\n",salary);
        }
         else
         {
        printf("You are not eligible for the bonus\n");
         }
    }
    else
    {
        printf("You are not eligible for the bonus\n");
    }
   

    return 0;
}