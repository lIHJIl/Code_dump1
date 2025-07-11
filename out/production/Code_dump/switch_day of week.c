#include <stdio.h>
int main()
{
    int day;
    printf("Enter day number\n");
    scanf("%d", &day);

    switch(day)
    {
        case 1 : // Sunday
                    printf("Sunday");
                    break;
        case 2 : // Monday
                    printf("Monday");
                    break;
        case 3 : // Tuesday
                    printf("Tuesday");
                    break;
        case 4 : // Wednesday
                    printf("wednesday");
                    break;
        case 5 : // Thursday
                    printf("thursday");
                    break;
        case 6 : // Friday
                    printf("friday");
                    break;
        case 7 : // Saturday
                    printf("saturday");
                    break;
        default : 
                    printf("Enter correct day number ^_~");
    }
   
}
