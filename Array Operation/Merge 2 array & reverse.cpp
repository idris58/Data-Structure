#include<iostream>
using namespace std;
int main()
{
    int arr1[50],arr2[50],arr3[100];
    int n,m,i,k;
    cout<<"Enter the Size for First Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements for First Array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr1[i];
        arr3[i]=arr1[i];
    }
    k=i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>m;
    cout<<"Enter "<<m<<" Elements for Second Array: ";
    for(i=0; i<m; i++)
    {
        cin>>arr2[i];
        arr3[k]=arr2[i];
        k++;
    }
    cout<<"\nThe New Array Is:\n";
    for(i=0; i<k; i++)
        cout<<arr3[i]<<" ";

        cout<<"\n\nThe Reverse of New Array is:\n";
    for(i=(k-1); i>=0; i--)
        cout<<arr3[i]<<" ";
    cout<<endl;
    return 0;
}
