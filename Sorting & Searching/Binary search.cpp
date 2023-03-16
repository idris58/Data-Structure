#include<iostream>
using namespace std;
int main()
{
    int a[10]={50,60,44,222,15,24,63,57,59,88};
    int item =63;
    int i,left=0,right=9,middle,temp,index;
    //left=0;
    //right=9;
    //Sorting
    //15 24 44 50 57 59 60 63 88 222
    for(i=1; i<10; i++)
    {
        temp=a[i];
        index=i;
        while(index>0 && a[index-1]>temp)
        {
            a[index]=a[index-1];
            index--;
        }
        a[index]=temp;
    }
    //Binary search
    while(left<=right)
    {
        middle=(left+right)/2;
        if(a[middle]==item)
        {
            cout<<"Item fount at index:"<<middle;
            return 0;
        }
        else if(a[middle]<item)
        {
            left=middle+1;
        }
        else
        {
            right=middle-1;
        }
    }
    cout<<"Item not found"<<endl;
    return 0;
}
