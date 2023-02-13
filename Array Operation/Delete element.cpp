#include<iostream>
using namespace std;

int main()
{
    int n, value, position;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value for deletation: ";
    cin>>value;
    cout<<"Enter the position: ";
    cin>>position;
    for(int i=position; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<".....Array after deletation....."<<endl;
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
