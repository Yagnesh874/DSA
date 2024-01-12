#include <iostream>
using namespace std;

class stack
{
    int top;

public:
    stack()
    {
        top = -1;
    }
    int stk[5];
    void push();
    void pop();
    void peek();
    void display();
    void isEmpty();
};

void stack::isEmpty()
{
    if (top == -1)
    {
        cout << "The stack is empty";
    }
}
void stack::push()
{
    if (top >= 5)
    {
        cout << "The stack is full";
    }
    else
    {
        top++;
        int no;
        cout << "Enter number";
        cin >> no;
        stk[top] = no;
    }
}
void stack::pop()
{
    if (top >= 5)
    {
        cout << "The stack is full";
    }
    else
    {
        cout << "Deleted elemets is : " << stk[top];
        top--;
    }
}
void stack::peek()
{
    cout << stk[top];
}
void stack::display()
{
    if (top >= 5)
    {
        cout << "The stack is full";
    }
    else
    {
        for(int i=0;i<=4;i++)
        {
            cout<<"\t"<<stk[i];
        }
    }

}
int main()
{
    stack s;
    int choice;
    do
    {
        cout << "\n 1. push";
        cout << "\n 2. pop";
        cout << "\n 3.peek";
        cout << "\n 4. display";
        cout << "\n 5. exit";
        cout << "\n. Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            exit(0);
        }
    } while (choice <= 4);

    return 0;
}

