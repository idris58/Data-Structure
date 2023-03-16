#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

node* firstnode=NULL;
void insertNodeAtLast(int data)
{
    node* newnode=new node;
    newnode->data=data;
    newnode->next=NULL;

    if(firstnode==NULL)
    {
        firstnode=newnode;
    }
    else
    {
        node* currentnode=firstnode;
        while(currentnode->next!=NULL)
        {
            currentnode=currentnode->next;
        }
        currentnode->next=newnode;
    }
}


void sorting()
{
    node* i,*j;
    int temp;
    for(i=firstnode;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
}


void display()
{
    node* currentnode=firstnode;
    cout<<"The List is:\n";
    while(currentnode!=NULL)
    {
        cout<<currentnode->data<<" ";
        currentnode=currentnode->next;
    }
}
int main()
{
    cout<<"Enter element to insert in list\n";
    insertNodeAtLast(76);
    insertNodeAtLast(58);
    insertNodeAtLast(98);
    insertNodeAtLast(32);
    insertNodeAtLast(46);
    display();
    cout<<"\n\n\nAfter sorting\n";
    sorting();
    display();
    cout<<"\n\n\n";
}
