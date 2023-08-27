/*
Maximum and minimum of an array using minimum number of comparisons
*/
#include<iostream>
using namespace std;
struct Pair
{
    int max;
    int min;
};
struct Pair findminmax(int *arr,int n)
{
    struct Pair minmax;
    int i;
    if(n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
     
    for(i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)    
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)    
            minmax.min = arr[i];
    }
    return minmax;

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
    struct Pair res;
    res = findminmax(arr,n);
    cout<<"\nMax:"<<res.max;
    cout<<"\nMin:"<<res.min;


}
