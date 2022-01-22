#include <iostream>
#include <conio.h>
#define N 5
using namespace std;
int stack[N];
int top = -1;
void push()
{
    int item;
    cout << "enter item"
         << " ";
    cin >> item;
    if (top > N - 1)
    {
        cout << "overflow"
             << "\n";
    }
    else
    {
        top++;
        stack[top] = item;
    }
}
void pop()
{
    int temp;
    if (top == -1)
    {
        cout << "underflow"
             << "\n";
    }
    else
    {
        temp = stack[top];
        top--;
        cout << "deleted item is"
             << " " << temp<<"\n";
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "underflow"
             << "\n";
    }
    cout << "first item is"
         << " " << stack[top]<<"\n";
}

void display()
{
    int i;
    if (top == -1)
    {
        cout << "underflow"
             << "\n";
    }
    for (i = top; i >= 0; i--)
    {
        cout << "stack items are"
             << " " << stack[i]<<"\n";
    }
}
int main()
{

    int choice;
    int i;

    do
    // for(i=1;i<=4;i++)
    {
        cout << "enter ur choice"<< " "<< "\n"<< "\n"
             << "1:push"
             << "\n"
             << "2:pop"
             << "\n"
             << "3:peek"
             << "\n"
             << "4:display"
             << "\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;

        default:
            break;
        }
    } while (choice != 0);
}