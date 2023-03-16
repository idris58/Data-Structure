#include <bits/stdc++.h>
#define MAX_SIZE 5
using namespace std;
class Stack
{
public:
    int item, i;
    int mystack[MAX_SIZE];
    int top;

    Stack()
    {
        top = -1;
    }
    bool isFull()
    {
        if(top== MAX_SIZE - 1)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if(top ==-1)
            return true;
        else
            return false;
    }
    void push()
    {
        if (isFull())
            cout <<"Stack Overflow!!!";
        else
        {
            cout << "\nEnter The Value to be pushed : ";
            cin>>item;
            top++;
            mystack[top] = item;
            cout << "\n## Position : " << top << ", Pushed Value  :" << item;
        }
    }
    void pop()
    {
        if (isEmpty())
            cout << "\n## Stack is Empty!";
        else
        {
            --top;
            cout << "\nValue: " << mystack[top+1]<<" Pop from Position: " << top+1;
        }
    }
    void display()
    {
        if(top>=0)
        {
            cout<<"\nStack elements are:";
            for(int i=top; i>=0; i--)
                cout<<mystack[i]<<" ";
            cout<<endl;
        }
        else
            cout<<"\nStack is empty";
    }
};

int main()
{
    int ch;
    Stack stack;
    do
    {
        cout << "\nWhat you want to do?";
        cout << "\n1.Push element in the stack \n2.Pop element in the stack \n3.Display the stack \nOthers to exit";
        cout << "\nEnter Your Choice : ";
        cin>>ch;
        if(ch==1)
        {
            stack.push();
        }
        else if(ch==2)
        {
            stack.pop();
        }
        else if(ch==3)
        {
            stack.display();
        }
        else
            break;
    }
    while (true);

    return 0;
}
