#include<iostream>
using namespace std;
int main()
{
    int a[10]= {50,60,44,222,15,24,63,57,59,88};
    int i,index,temp;

    for(i=1; i<10; i++)
    {
        temp=a[i];
        index=i;
        while(a[index-1]>temp)
        {
            a[index]=a[index-1];
            index--;
        }
        a[index]=temp;
    }
    cout<<"Sorted element is\n";
    for(i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
