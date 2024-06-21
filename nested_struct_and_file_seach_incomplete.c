#include <stdio.h>
#include <stdlib.h>
struct address
{
    char hno[10];
    char city[10];
    char state[10];
};
struct info
{
    int age;
    char fname[20];
    char lname[20];
    long int mobno;
    struct address add;
};
int search(char[10],struct info,int,int);
int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "w");
    int lim;
    printf("Enter the no. of Entries:-  ");
    scanf("%d", &lim);
    struct info info[lim];

    // taking input locally
    for (int i = 0; i < lim; i++)
    {

        printf("Enter the first name of person %d:-  \n", i + 1);
        scanf("%s", &info[i].fname);
        printf("Enter the last name of %s:-  \n", info[i].fname);
        scanf("%s", &info[i].lname);
        printf("Enter age of of %s:-  \n", info[i].fname);
        scanf("%d", &info[i].age);
        printf("Enter Mobile no of %s:-  \n", info[i].fname);
        scanf("%ld", &info[i].mobno);
        printf("Enter House no of %s:-  \n", info[i].fname);
        scanf("%s", &info[i].add.hno);
        printf("Enter resident city name of %s:-  \n", info[i].fname);
        scanf("%s", &info[i].add.city);
        printf("Enter State name of %s:-  \n", info[i].fname);
        scanf("%s", &info[i].add.state);
    }

    // SAVING

    if (fptr == NULL)
    {
        printf("File does not exists EXITING!!");
        exit(1);
    }
    else
    {
        fprintf(fptr, "%s", "\t\tDETAILS\n");
        for (int i = 0; i < lim; i++)
        {

            fprintf(fptr, "\t\t%d", i + 1);
            fprintf(fptr, "%s", " ENTRY\n");
            fprintf(fptr, "%s", "First name :-");
            fprintf(fptr, "%s \n", info[i].fname);
            fprintf(fptr, "%s", "Last name:- ");
            fprintf(fptr, "%s\n", info[i].lname);
            fprintf(fptr, "%s", "Age:- ");
            fprintf(fptr, "%d\n", info[i].age);
            fprintf(fptr, "%s", "Mobile no.:- ");
            fprintf(fptr, "%ld\n", info[i].mobno);
            fprintf(fptr, "%s", "House no.:- ");
            fprintf(fptr, "%s\n", info[i].add.hno);
            fprintf(fptr, "%s", "City:- ");
            fprintf(fptr, "%s\n", info[i].add.city);
            fprintf(fptr, "%s", "State:- ");
            fprintf(fptr, "%s\n", info[i].add.state);
            fprintf(fptr, "%s", "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
        }
    }
    printf("\tData saved successfully!\n\n");
    fclose(fptr);
    

    // search
    search:
    fflush(stdin);
    char ch;
    int op;
    printf("Search for an entry? Y or N");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        printf("Search by:- \n1.first name\n2.Last name\n3.Age\n4.City name\n5. Mobile no\n6.city\n7.state:-\n");
        scanf("%d",&op);
        char sr[10];
        if(op==1)
        {
            gets(sr);

        }

    }
    
}
int search(char ele[10],struct  info,int limit,int choice )
{
    

    
}