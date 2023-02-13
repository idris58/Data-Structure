#include<iostream>
using namespace std;
int main()
{
    //initialize
    int arr[100],i,j,k,n,flag;
    //array size input
    cout<<"Enter size of array: ";
    cin>>n;
    //array element input
    cout<<"\nEnter the element: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n;i++)
    {
        flag=0;
        k=arr[i]/2;
        for(j=2; j<=k; j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<arr[i]<<" is not prime\n";
        else
            cout<<arr[i]<<" is prime\n";
        }
    return 0;

}
