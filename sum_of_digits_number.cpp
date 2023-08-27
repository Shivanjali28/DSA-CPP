#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an element:";
    cin>>n;
    int rem,sum=0;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;


    }
    cout<<"\nSum of digits:"<<sum;
}