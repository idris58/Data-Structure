#include<iostream>
using namespace std;
int main()
{
    int mat1[3][4], i, j, mat2[3][4];
    cout<<"Enter 12 Elements for 3*4 Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            cin>>mat1[i][j];
    }
    cout<<"\nOriginal Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            cout<<mat1[i][j]<<"  ";
        cout<<endl;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            mat2[j][i] = mat1[i][j];
    }
    cout<<"\nTranspose of Given Matrix is:\n";
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
            cout<<mat2[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
