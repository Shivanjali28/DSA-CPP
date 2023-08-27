//Move all negative numbers to beginning and positive to end with constant extra space
#include<iostream>
using namespace std;
void rearrange(int*p,int n)
{
    int i,j;
    j=0;
    for(i=0;i<n;i++)
    {
        if(p[i]<0)
        {
            if(i!=j)
            {
                swap(p[i],p[j]);
            }
            j++;
        }
    }
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
    rearrange(arr,n);
    cout<<"\nArray after rearranging:";
    print(arr,n);
}
