#include <stdio.h>
#include <conio.h>
void explanation();
int main()
{
    int u;
    char chr, chr1;
    printf("Reading from STDIN :-  ");
    scanf("%c", &chr);
    chr1 = getchar();
    printf("\nCHR = %c and chr1 = %c", chr, chr1);
    printf("\nReading from keyboard:-    ");
    chr = getche();
    chr1 = getch();
    printf("\nCHR = %c and chr1 = %c", chr, chr1);
    printf("\nPrev input cant affect:-  ");
    scanf("%d", &u);
    chr = getche();
    printf("\nU = %d and CHR = %c", u, chr);
    explanation();

    return 0;
}
void explanation()
{
    /* In this program we have taken 4 types of input :-
            1. STDIN using scanf :=- In this we have to press enter for giving input .
            
            2. getchar :- This function reads the last pressed key before it
                            in this case after scanf enter is pressed therefore it recorded 
                            enter in ch1.
            
            3.getch :-  This function reads directly from keyboard without pressing enter 
                        It also shows the character which is pressed.
            
            4.getche :- This function works exactly like getch but with one TWIST 
                        it does not shows the character you have pressed!
                        anonymous input (o|o) 
                                                                */
    printf("\n \n \t  Hence explained\n\t *^____^* ");
}