#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int odd=0, even=0,i;
    cout<<"Enter 10 Array Element: \n";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    cout<<even<<" Even Numbers\n";
    cout<<odd<<" Odd Numbers";
    return 0;
}
