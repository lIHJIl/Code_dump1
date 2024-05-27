#include <stdio.h>
#include <stdlib.h>
int cnvrtuppr(char l);
int cnvrtlwr(char l);
int main()
{
    int ch;
    char name[20];
    printf("Enter a Word\n");
    scanf("%s", &name);
taking:
    printf("Enter the choice\n 1:-lowercase\n2:-UPPERCASE\n3:-Proper case\n4:-tOGGLE\n5:-EXIT!!\n");
    scanf("%d", &ch);

    if (ch == 1)
    {
        for (int i = 0; name[i] != '\0'; i++)
        {
            printf("%c", cnvrtlwr(name[i]));
        }
        printf("\n");
        goto taking;
    }
    else if (ch == 2)
    {
        for (int i = 0; name[i] != '\0'; i++)
        {
            printf("%c", cnvrtuppr(name[i]));
        }

        printf("\n");
        goto taking;
    }
    else if (ch == 3)
    {
        for (int i = 0; name[i] != '\0'; i++)
        {
            if (i == 0)
            {
                printf("%c", cnvrtuppr(name[i]));
            }
            else
            {
                printf("%c", cnvrtlwr(name[i]));
            }
        }
        printf("\n");
        goto taking;
    }
    else if (ch == 4)
    {
        for (int i = 0; name[i] != '\0'; i++)
        {
            if (i == 0)
            {
                printf("%c", cnvrtlwr(name[i]));
            }
            else
            {
                printf("%c", cnvrtuppr(name[i]));
            }
        }
        printf("\n");
        goto taking;
    }
    else if (ch == 5)
    {
        printf("Thank you!!*^____^*");
        exit(0);
    }
    else
    {
        printf("\nEnter correct Choice PLZZZ\n");
        goto taking;
    }

    return 0;
}

int cnvrtlwr(char l)
{
    if (l >= 65 && l <= 90)
    {
        return l + 32;
    }
    else
    {
        return l;
    }
}
// convert uppercase function
int cnvrtuppr(char l)
{
    if (l >= 97 && l <= 122)
    {
        return l - 32;
    }
    else
    {
        return l;
    }
}