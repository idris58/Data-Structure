#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int count=0,i,j,element;
    cout<<"Enter 10 element of array:\n";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Input a number to search: ";
    cin>>element;
    for(i=0; i<10; i++)
    {
        if(arr[i]==element)
        {
            count++;
        }
    }
    cout<<"\nThe number occurs "<<count<<" times in the array.\n";
    return 0;
}
