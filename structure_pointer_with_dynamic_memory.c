#include <stdio.h>
#include <stdlib.h>

struct book
{
    int bid;
    char bname[30];
    int price;
};
int main()
{
start:
    int n;
    printf("Enter the no. of entries:- ");
    scanf("%d", &n);
    typedef struct book bk;
    bk *b = (bk *)calloc(n, sizeof(bk));

    if (n <= 0)
    {
        printf("Enter positive no. of entries");
        goto start;
    }

    if (b == NULL)
    {
        printf("Memory not sufficient!");
        exit(1);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter the book id of %d book :- \n", i + 1);
            scanf("%d", &b[i].bid);
            printf("Enter book name of %d :- \n", b[i].bid);
            scanf("%s", &b[i].bname);
            printf("Enter the price of %s\n", b[i].bname);
            scanf("%d", &b[i].price);
        }
    choice:
        char ch;
        fflush(stdin);
        printf("Show records? Y or N\n");
        scanf(" %c", &ch);
        if (ch == 'Y' || ch == 'y')
        {
            for (int i = 0; i < n; i++)
            {
                printf("Details of %d book", i + 1);
                printf("Book id :- %d \n", b[i].bid);
                printf("Book name of %d is  :- %s\n", b[i].bid, b[i].bname);
                printf("The price of %s is %d\n", b[i].bname, b[i].price);
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            }
        }
        else if (ch == 'n' || ch == 'N')
        {
            printf("Thank you!");
        }
        else
        {
            printf("Enter correct choice");
            goto choice;
        }
    }

    return 0;
    free(b);
}