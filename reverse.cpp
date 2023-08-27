#include<iostream>
using namespace std;
void reverse(int *arr,int start,int end);
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
void rev_array(int *p ,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int temp=*(p+s);
    *(p+s)=*(p+e);
    *(p+e)=temp;
    rev_array(p,s+1,e-1);
  
}
void reverse(int *arr,int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int *p;
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;
    p = new int[n];
    scan(p,n);
    cout<<"Elements as follows :";
    print(p,n);
    //rev_array(p,0,n-1);
     reverse(p,0,n-1);
    cout<<"\nArray after reversing :";
    print(p,n);
}