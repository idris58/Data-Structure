#include <bits/stdc++.h>
#define MAX_SIZE 5
using namespace std;
class Queue
{
public:
    int item, i;
    int myqueue[MAX_SIZE];
    int front, rear;
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if(rear == MAX_SIZE - 1)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if(front == -1|| front>rear)
            return true;
        else
            return false;
    }
    void enQueue()
    {
        if (isFull())
        {
            cout <<"Queue Overflow!!!";
        }
        else
        {
            cout << "\nEnter The Value to be insert : ";
            cin>>item;
            if(front==-1)front=0;
            rear++;
            myqueue[rear] = item;
            cout << "\n## Position : " <<rear << ", Inserted Value  :" << item;
        }
    }
    void deQueue()
    {
        if (isEmpty())
        {
            cout << "\n## Queue is Empty!";
        }
        else
        {
            cout <<"\nValue: " << myqueue[front]<<" deleted from Position: " <<front;
            front++;
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"\nQueue is empty";
        }
        else
        {
            cout<<"\nQueue elements are:";
            for(int i=front; i<=rear; i++)
                cout<<myqueue[i]<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    int ch;
    Queue queue;
    do
    {
        cout << "\nWhat you want to do?";
        cout << "\n1.Enqueue element in the queue \n2.DeQueue element in the queue \n3.Display the stack \nOthers to exit";
        cout << "\nEnter Your Choice : ";
        cin>>ch;
        if(ch==1)
        {
            queue.enQueue();
        }
        else if(ch==2)
        {
            queue.deQueue();
        }
        else if(ch==3)
        {
            queue.display();
        }
        else
            break;
    }
    while (true);

    return 0;
}
