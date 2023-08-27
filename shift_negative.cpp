/*
Maximum and minimum of an array using minimum number of comparisons
*/
#include<iostream>
using namespace std;
int findmax(int *p,int n)
{
    int i;
    int max = p[0];
    for(i=0;i<n;i++)
    {
        if(max<p[i])
        {
            max=p[i];
        }
    }
    return max;

}
int findmin(int *p,int n)
{
    int i;
    int min = p[0];
    for(i=0;i<n;i++)
    {
        if(min>p[i])
        {
            min=p[i];
        }
    }
    return min;

}
void scan(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
}
void print(int *p ,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<"  ";
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int *arr=new int[n];
    scan(arr,n);
    cout<<"Array:";
    print(arr,n);
    cout<<"\nMaximum element:"<<findmax(arr,n);
    cout<<"\nMinimum element:"<<findmin(arr,n);
}
