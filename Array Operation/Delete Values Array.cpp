#include<iostream>
using namespace std;
int main()
{
    int i,m,n=10,k=3,arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Given Array Is: \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n--;
    n--;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }

    for(i=k;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"\nArray After Deletion\n";
    for(i=0;i<n;i++)
   cout<<arr[i]<<" ";
}
