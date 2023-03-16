#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int i;
    cout<<"Enter 10 element of array\n";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
      if(arr[i]>0){
        cout <<arr[i]<<" Occurs = "<< " "<<count<<" time"<<endl;
      }
    }
    return 0;
}
