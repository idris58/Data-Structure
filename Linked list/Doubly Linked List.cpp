#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};
struct Node* firstNode = NULL;

void InserAtLast(int data)
{
    Node* newNode = new Node;
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    if (firstNode == NULL)
    {
        firstNode = newNode;
        return;
    }
    Node* currentNode = firstNode;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
}

void insertfirst(int data)
{
    struct Node* newnode = new Node;
   newnode->data = data;
   newnode->prev = NULL;
   newnode->next = firstNode;
   if(firstNode != NULL)
   firstNode->prev = newnode ;
   firstNode = newnode;
}
void deleteFirst(){
    Node* currentNode;
    currentNode=firstNode;
    firstNode=currentNode->next;
    delete currentNode;
}
void deleteLast()
{
    Node* prev;
    Node* currentNode = firstNode;
    while (currentNode->next != NULL)
    {
        prev=currentNode;
        currentNode = currentNode->next;
    }
    prev->next=NULL;
    delete currentNode;
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
    while(currentNode->next != NULL)
    {
        if (currentNode->data!=data)
        {
            prevNode =currentNode;
            currentNode = currentNode->next;
        }
        prevNode->next=currentNode->next;
        delete currentNode;
        return;
    }
}
void display() {
   struct Node* currentNode;
   currentNode = firstNode;
   cout<<"NULL<-->";
   while(currentNode != NULL) {
      cout<< currentNode->data <<"<-->";
      currentNode = currentNode->next;
   }
   cout<<"NULL";
}
int main() {
   InserAtLast(3);
   InserAtLast(8);
   InserAtLast(5);
   InserAtLast(7);
   cout<<"\nThe doubly linked list is: \n";
   display();
   cout<<"\n\n\n";
   insertfirst(2);
   insertfirst(9);
   cout<<"After insert node at first\n";
   cout<<"\nThe doubly linked list is: \n";
   display();
    cout<<"\n\n\n";
   deleteFirst();
   deleteLast();
   Delete(5);
   cout<<"After delete\n";
   cout<<"\nThe doubly linked list is: \n";
   display();
    cout<<"\n\n\n";
   return 0;
}
