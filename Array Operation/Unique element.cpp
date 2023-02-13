#include<iostream>
using namespace std;
int main()
{
    int arr[100], size, i, j;

    cout<<"Enter number of elements in array: ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers\n";

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique Elements are\n";
    for(i=0;i<size;i++)
    {
         for (j=0;j<i;j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
