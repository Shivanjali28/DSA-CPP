//sorted matrix
#include<iostream>
using namespace std;

int main()
{
    int mat[3][3];
    int i,j;
    cout<<"\nEnter element in format e1 e2 e3 ...."<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    // cout<<"\nPrint matrix:";
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int temp[3][3];
    int k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp[k][0] = i;
            temp[k][1] = j ;
            temp[k][2] =mat[i][j];
            k++;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<temp[i][j]<<" ";
        }
    }
    // cout<<"\nPrint matrix after sorting:";
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


}

