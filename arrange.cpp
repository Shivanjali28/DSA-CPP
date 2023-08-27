#include<iostream>
using namespace std;
void fixarray(int *p,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)==i)
            {
                temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
                break;

            }


        }

    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)!=i)
        {
            *(p+i)=-1;
        }
    }
    cout<<"\nArray after rearranging:";
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
}
int main()
{
   int p[]={ -1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
   fixarray(p,10);

}