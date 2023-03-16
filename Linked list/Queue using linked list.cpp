#include<iostream>
using namespace std;
struct Node
{
  int data;
  Node *nextNode;
} *front = NULL,*rear = NULL;

void enqueue(int item)
{
  Node* newNode = new Node;
  newNode->data = item;
  newNode->nextNode = NULL;
  if (front == NULL  && rear == NULL)
    {
      front = rear = newNode;
      rear->nextNode = NULL;
    }
  else
    {
      rear->nextNode = newNode;
      rear = newNode;
      rear->nextNode = NULL;
    }
}
int dequeue()
{
  struct Node *currentNode;
  if (front == NULL)
    {
      cout << "Queue is empty!!\n";
    }
  else
    {
      currentNode = front;
      front = front->nextNode;
      delete currentNode;
    }
}
void print()
    {
        struct Node* currentNode=front;
        cout<<"The Queue is\n";
        while (currentNode!=NULL)
        {
            cout<<currentNode->data<<" ";
            currentNode=currentNode->nextNode;
        }
        cout<<"\n";
    }

int main ()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout<<"Enqueue succesfull\n";
    print();
    cout<<"\n\n\n";
    dequeue();
    cout<<"After dequeue\n";
    print();
    cout<<"\n\n\n";
    enqueue(98);
    enqueue(55);
    print();

}
