#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *nextNode;

};
class stack
{
    struct Node* top;
public:
    stack()
    {
        top=NULL;
    }
    void push(int data)
    {
        Node* newnode = new Node;
        newnode->data=data;
        newnode->nextNode=NULL;
        if(top!=NULL)
            newnode->nextNode = top;
        top = newnode;
    }
    void pop()
    {
        Node* currentNode;
        if(top == NULL)
        {
            cout<<"\n Empty stack";
            return;
        }
        currentNode= top;
        top=top->nextNode;
        cout<<"popped element is "<<currentNode->data<<"\n";
        delete currentNode;
    }
    void printer()
    {
        Node* currentNode=top;
        cout<<"The stack is\n";
        while (currentNode!=NULL)
        {
            cout<<currentNode->data<<" ";
            currentNode=currentNode->nextNode;
        }
        cout<<"\n";
    }
};

int main()
{
    stack s;
    s.push(45);
    s.push(46);
    s.push(47);
    s.push(48);
    s.printer();
    cout<<"\n\n\n";
    s.pop();
    s.printer();
    return 0;
}
