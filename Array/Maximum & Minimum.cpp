#include<iostream>
using namespace std;

int main()
{
  int arr[50],max,min,i,n;
    cout<<"Enter Size of array: ";
    cin>>n;

  cout<<"Enter "<<n<<" elements of array: ";
  for(i=0;i<n;i++)
  cin>>arr[i];

  max=arr[0];
  min=arr[0];
  for(i=0;i<n;i++)
  if(max<arr[i])
   max=arr[i];
  else if(min>arr[i])
   min=arr[i];

  cout<<"\nMaximum element of Array: "<<max;
  cout<<"\nMinimum element of Array: "<<min;
  return 0;
}
