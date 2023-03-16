#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {50,60,44,222,15,24,63,57,59,88};
    int i, j, temp;

    for(i=0; i<(10-1); i++)
    {
        for(j=0; j<(10-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted element are: \n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
