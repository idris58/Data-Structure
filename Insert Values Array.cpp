#include<iostream>
using namespace std;
int main()
{
    int a[50];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Given array is\n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    int end;
    cout<<"\nEnter element for end of the array: ";
    cin>>end;
    a[n]=end;
    int index,value;
    cout<<"Enter specific index no to insert 2nd value: ";
    cin>>index;
    cout<<"Enter element for index no "<<index<<" :";
    cin>>value;
    for(int i=n; i>=index; i--)
    {
        a[i+1]=a[i];
    }

    a[index]=value;
    for(int i=n+1; i>=0; i--)
    {
        a[i+1]=a[i];
    }
    cout<<"Enter element for beginning of the array: ";
    int b;
    cin>>b;
    a[0]=b;
    cout <<"\nOutput array after addition:\n";
    for(int i=0; i<n+3; i++)
    {
        cout<<a[i]<<" ";
    }
    cout <<endl;
    return 0;
}
