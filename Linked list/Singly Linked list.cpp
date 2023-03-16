#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* nextNode;
};
Node* firstNode;
Node* currentNode;

void InsertnewNode(int data)
{
    Node* newNode = new Node;
    newNode->data=data;
    newNode->nextNode=NULL;
    if(firstNode==NULL)
    {
        firstNode = newNode;
        currentNode=newNode;
    }
    else
    {
        currentNode->nextNode=newNode;
        currentNode=newNode;
    }
}
void InsertFirst(int data)
{
    Node* newNode = new Node;
    newNode->data=data;
    newNode->nextNode=NULL;

    newNode->nextNode = firstNode;
    firstNode = newNode;
}
void InserAtLast(int data)
{
    Node* NewNode = new Node;
    if (firstNode == NULL)
    {
        firstNode = NewNode;
        return;
    }
    Node* currentNode = firstNode;
    while (currentNode->nextNode != NULL)
    {
        currentNode = currentNode->nextNode;
    }
    currentNode->nextNode = NewNode;
}

void Delete(int data)
{
    if (firstNode == NULL)
    {
        cout << "Error: Nothing to delete " << endl;
        return;
    }
    Node* currentNode = firstNode;
    Node* prevNode = firstNode;
    while(currentNode->nextNode != NULL)
    {
        if (currentNode->data!=data)
        {
            prevNode =currentNode;
            currentNode = currentNode->nextNode;
        }
        prevNode->nextNode=currentNode->nextNode;
        delete currentNode;
        return;
    }
}
void Search(int data)
{
    Node* currentNode = firstNode;
    while (currentNode != NULL)
    {
        if (currentNode->data == data)
        {
            cout << "Found\n" << endl;
            return;
        }
        currentNode = currentNode->nextNode;
    }
    cout << "Not found\n" << endl;
}
void show()
{
    Node* currentNode = firstNode;
    cout << "List is:\n";
    while (currentNode != NULL)
    {
        cout << currentNode->data <<" ";
        currentNode = currentNode->nextNode;

    }
    cout << endl;
}

int main()
{
    int ch,data;
    do
    {
        cout << "What you want to do?";
        cout << "\n1.Create and Insert a node. \n2.Display List \n3.Search an item. \n4.Insert item at first position.\n5.Insert item at last position. \n6.Delete an item.";
        cout<<"\nEnter 7 to exit";
        cout << "\nEnter Your Choice : ";
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter the value of Node"<<endl;
            cin>>data;
            InsertnewNode(data);
        }
        else if(ch==2)
        {
            show();
        }
        else if(ch==3)
        {
            cout<<"Enter the value to search"<<endl;
            cin>>data;
            Search(data);
        }
        else if(ch==4)
        {
            cout<<"Enter the value of Node"<<endl;
            cin>>data;
            InsertFirst(data);
        }
        else if(ch==5)
        {
            cout<<"Enter the value of Node"<<endl;
            cin>>data;
            InserAtLast(data);
        }
        else if(ch==6)
        {
            cout<<"Enter the value you want to delete"<<endl;
            cin>>data;
            Delete(data);
        }
        else
            break;
    }
    while (true);

    return 0;
}
