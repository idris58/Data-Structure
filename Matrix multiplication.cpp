#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],arr2[3][3],i,j,arr3[3][3];
    cout<<"Enter Elements of First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>arr1[i][j];
    }
    cout<<"Enter Elements of Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>arr2[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            arr3[i][j]=arr1[i][j]*arr2[j][i];
    }
    cout<<"Multiplied Result of Two Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<arr3[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
