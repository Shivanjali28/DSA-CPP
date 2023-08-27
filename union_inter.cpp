#include<iostream>
using namespace std;
void unionset(int *arr1,int *arr2,int m,int n );
void scan(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
}
void print(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}
void inter(int *arr1,int *arr2,int m,int n)
{
    int i,j;
    i=0,j=0;
    int k=0;
    int res[20];
    while(i<m && j<n)
    {
        if(arr1[i]>arr2[j])
        {
            j++;
        }
        else if(arr1[i]<arr2[j])
       {
            i++;
       }
       else
       {
            res[k]=arr1[i];
            i++;
            j++;
       }
    }
    cout<<"\nIntersection of two arrays:";
    for(i=0;i<=k;i++)
    {
        cout<<res[i]<<" ";

    }

}
void unionset(int *arr1,int *arr2,int m,int n )
{
    int i;
    int j;
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(arr1[i] > arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int *arr1,*arr2;
    int m,n;
    cout<<"Enter number of elements you want in arr1:";
    cin>>m;
    cout<<"\nEnter number of elements you want in arr2:";
    cin>>n;
    arr1 = new int[m];
    arr2 = new int[n];
    scan(arr1,m);
    scan(arr2,n);
    cout<<"\nPrint arr1:";
    print(arr1,m);
    cout<<"\nPrint arr2:";
    print(arr2,n);
    //inter(arr1,arr2,m,n);
    unionset(arr1,arr2,m,n);

}