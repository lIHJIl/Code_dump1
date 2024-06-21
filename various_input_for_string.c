#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    printf("In this program various types of input for string are demonstrated:-   ");
choices:
    fflush(stdin);
    char name[20];
    char name1[20];
    char name2[20];
    char name3[20];
    char name4[100];
    char name5[20];
    char enter;
    int ch;

    printf("\nWhat to demonstrate :-\n1.-normal method\n2.Terminate scanning  until enter is pressed\n3.only scan if desired char are typed\n4. only scanf until desired char are not typed\n5.Taking input until specific char is not typed\n6.gets\n7. exit \n");
    scanf("%d", &ch);
    enter = getchar();
    //  Choices
    if (ch == 1)
    {
        printf("\n\nthe normal method :-  scanf");
        scanf("%s", name);
        puts(name);
        goto choices;
    }
    else if (ch == 2)
    {
        printf("\n\nthe termination definer in this case enter is termination  key:- ");
        scanf("%19[^\n]", name1);
        puts(name1);
        goto choices;
    }
    else if (ch == 3)
    {
        printf("\n\nThe chose taker : in this only specified char can be taken if other than that is taken then  it will terminate(in this case only qwe are taken)");
        scanf("%19[qwe]", name2);
        puts(name2);
        goto choices;
    }
    else if (ch == 4)
    {
        printf("\n\n the not chosen one: in this char other than specifed are taken if specified char are  given it will terminate(i this case lkj)");
        scanf("%19[^lkj]", name3);
        puts(name3);
        goto choices;
    }
    else if (ch == 5)
    {
        printf("\n\n the paragraph input(will take input until '*' is typed):- ");
        scanf("%99[^*]", name4);
        puts(name4);

        goto choices;
    }
    else if (ch == 6)
    {
        printf("The function gets:- ");
        fgets(name5,20,stdin);
        puts(name5);

        goto choices;
    }
    else if (ch == 7)
    {
        exit(0);
    }
    else
    {
        goto choices;
    }

    return 0;
}