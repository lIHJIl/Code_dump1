#include <stdio.h>
#include <stdlib.h>
// prototyping :-)
void push(int *);
void pop(int *);
void del_loc(int *, int, int);
void dis_stack(int *);
void peek(int *);
// variables
int size, top = -1;

int main()
{
   printf("Enter the size of stack:-");
   scanf("%d", &size);
   int stack[size];
   int op, loc;
start:
   printf("Enter the choice:-\n 1. Add an element onn top \n 2.Remove an element from top\n 3.Delete an element from a specific location \n 4.Display current stack\n5.Peek\n 6.exit\n WARNING!!\n(program will exit if stack is underflow or overflow)\n\t Yours choice:- ");
   scanf("%d", &op);
   // option making
   if (op == 1)
   {
      push(stack);
      goto start;
   }
   else if (op == 2)
   {
      pop(stack);
      goto start;
   }
   else if (op == 3)
   {
      printf("Enter the location of element to delete:- ");
      scanf("%d", &loc);
      if (loc < 0 || loc > top)
      {
         printf("Off limits");
         goto start;
      }
      del_loc(stack, size, loc);
      goto start;
   }
   else if (op == 4)
   {
      dis_stack(stack);
      goto start;
   }
   else if (op == 5)
   {
      peek(stack);
      goto start;
   }
   else if (op == 6)
   {
      printf("\n\n\t\tBye!");
      exit(0);
      goto start;
   }
   else
   {
      printf("Enter correct choice :-(");
      goto start;
   }
}

// function def

void push(int *stck)
{
   if ((top) == size)
   {
      printf("Stack Is overflowing!! Exitting");
      exit(0);
   }
   else
   {
      top++;
      printf("Enter the element to insert :- \n");
      scanf("%d", &stck[top]);
      printf("Now top element is %d\n", stck[top]);
   }
}

void pop(int *stck)
{
   if ((top) == 0)
   {
      printf("Stack is under flowing Exitting!");
      exit(0);
   }
   else
   {
      top--;
      printf("\tNow top element is %d\n\n", (*stck) + (top));
   }
}
void del_loc(int *stack, int size, int location)
{
   if (location < 0 || location > top)
   {
      printf("Invalid location!\n");
      return;
   }
   for (int i = location; i < top; i++)
   {
      stack[i] = stack[i + 1];
   }
   top--;
}
void dis_stack(int *stck)
{
   int i;
   printf("________STACK_______");
   printf("   |             |  ");
   printf("  \ /           \ / ");
   printf("   *             *  ");
   for (i = top; i >= 0; i--)
   {
      printf("%d\n", stck[i]);
   }
   printf("\n\n");
}
void peek(int *stck)
{
   printf("\n\n\n\tTop element is %d\n\n", stck[top]);
}