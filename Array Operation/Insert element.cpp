#include<iostream>
using namespace std;
int main()
{
    //initial array
    int arr[50],i,n,add;
    cin>>n;
    cout<<"Enter "<<n<<" array element: ";
    //loop for insert element
    for(i=0; i<n; i++)
        cin>>arr[i];
        //insert element
    cout<<"\nEnter elment to insert: ";
    cin>>add;
    arr[i]=add;
    //print new array
    cout<<"The new array is:\n";
    for(i=0; i<n+1; i++)
        cout<<arr[i]<<" ";
    return 0;

}
