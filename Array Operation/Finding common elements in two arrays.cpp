#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,k,arr3[20];
    cout<<"Enter size of 1st array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter element of 1st array:\n";
    for(i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of 2nd array: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter element of 2nd array:\n";
    for(j=0; j<m; j++)
    {
        cin>>arr2[j];
    }

    for(int i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[k]=arr1[i];
                k++;
            }
        }
    }
    if(k==0)
    {
        cout<<"No common element!";
    }
    else
    {
        cout<<"New array with common elements are: ";
        for(int i=0; i<k; i++)
        {
            cout<<arr3[i]<<" ";
        }
    }

    return 0;
}
