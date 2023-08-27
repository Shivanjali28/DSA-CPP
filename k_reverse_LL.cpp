#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Node;
Node * kreverse(Node*head,int k);
void show(Node *p);
class Node{
    public:
    int data;
    Node*next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int a)
    {
        data=a;
        next=NULL;
    }
};
class SLL
{
     Node*head;
     public:
     SLL()
     {
        head=NULL;
    }
    void create();
    void show();
    void addatend(int x);
    Node*getroot()
    {
        return head;
    }
};
void SLL:: create()
{
    char str[10];
    cout<<"Keep entering data until user enters STOP:";
    while(1)
    {
        cin.getline(str,10);
        if(strcmp(str,"STOP")==0)
        {
            break;
        }
        addatend(atoi(str));
    }
}
void SLL::addatend(int x)
{
    if(head==NULL)
    {
        head=new Node(x);
        return;
    }
    Node*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    Node*q=new Node(x);
    p->next=q;
}
void SLL::show()
{
    Node*p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void show(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
Node * kreverse(Node*head,int k)
{
    //base case
    if(head==NULL)
    {
        return head;
    }
    //Step1:reverse first k nodes
    Node *prev=NULL;
    Node *curr=head;
    Node *forward=NULL;
    int count=0;
    while(curr!=NULL&& count<k )
    {
        forward=curr->next;
        curr->next=prev;
        prev =curr;
        curr=forward;
        count++;

    }
    if(forward!=NULL)
    {
        head->next=kreverse(forward,k);
    }
    return prev;
}
int main()
{
    SLL obj;
    obj.create();
    cout<<"Linked list=>";
    obj.show();
    Node*p=obj.getroot();
    Node *h=kreverse(p,2);
    cout<<"Reverse=>";
    show(h);

}