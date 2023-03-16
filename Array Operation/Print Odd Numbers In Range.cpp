#include <iostream>
using namespace std;
void oddnumber(int num1,int num2)
{
    cout<<"\nOdd numbers between "<<num1<<" to "<<num2<<" is: \n";
    for(int i=num1; i<=num2; i++)
    {
        if (i%2!=0)
        cout <<i<<" ";
    }
}
int main()
{
    int x,y;
    cout<<"Starting value: ";
    cin>>x;
    cout<<"Ending value: ";
    cin>>y;
    oddnumber(x,y);
    return 0;
}
