#include<iostream>
using namespace std;
int main()
{
    //
    int arr[20],even[20],odd[20],i,j=0,k=0,size;
    cout<<"Enter Array Size :";
    cin>>size;
    for(i=0;i<size;i++){
    cout<<"\nEnter "<<size<<" Element: ";
    cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        //check even number
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }

        else
        {
            //odd number
            odd[k]=arr[i];
            k++;
        }
    }
    //print even number
        cout<<"\nEven elements :";
        for(i=0;i<j;i++)
        {
            cout<<even[i]<<" ";
        }
        //print Odd number
        cout<<"\nOdd elements :";
        for(i=0;i<k;i++)
        {
            cout<<odd[i]<<" ";
        }

return 0;


}
