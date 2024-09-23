#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class Stack
{
    private:
        int top=-1;
        int stack[20];

    public:
    void push()
    {   top++;
        cout<<"Enter element"<<endl;
        cin>>stack[top];
    }
    void pop()
    {
        top--;
    }
    void peek()
    {
        int top_e =stack[top];
        cout<<"The top Element is "<<top_e<<endl;
    }
};

int main()
{
    Stack S1;
    S1.push();
    S1.peek();
    S1.push();
    S1.peek();
    S1.push();
    S1.peek();
    S1.push();
    S1.peek();
    S1.push();
    S1.peek();
    S1.pop();
    S1.peek();
    S1.pop();

    return 0; 

}