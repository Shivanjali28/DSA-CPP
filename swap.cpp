//swap elements without using third variable
#include<iostream>
using namespace std;
int  main()
{
    int x,y;
    cout<<"Enter  elements:";
    cin>>x>>y;
    cout<<x<<"  "<<y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"\nElements after swapping:";
    cout<<x<<"  "<<y;

}