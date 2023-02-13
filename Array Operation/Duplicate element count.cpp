#include<iostream>
using namespace std;
int main(){
int arr[100];
int i,j,n,count =0;
cout<<"Enter Size of array: ";
cin>>n;
cout<<"Enter "<<n<<" element: ";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n; j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
            break;
        }
    }
}
 cout<<"Total number duplicate element is: "<<count;
    return 0;
}
