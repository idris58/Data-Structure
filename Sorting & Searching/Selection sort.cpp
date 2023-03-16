#include<iostream>
using namespace std;
int main()
{
    int a[10]={50,60,44,222,15,24,63,57,59,88};
    int i,j,index,temp,min;

    for(i=0;i<10-1;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<10;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    cout<<"Sorted element is\n";
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
