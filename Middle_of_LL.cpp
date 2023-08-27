#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Node;
int count(Node*head);
Node* getmiddle(Node*head);

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
int count(Node*head)
{
    if(head==NULL)
    {
        return 0;
    }
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}

Node* getmiddle(Node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    if(head->next->next==NULL)
    {
        return head->next;
    }
    Node *fast=head->next;
    Node*slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;

}
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

int main()
{
    SLL obj;
    obj.create();
    cout<<"Linked list=>";
    obj.show();
    Node*h=obj.getroot();
    h=getmiddle(h);
    cout<<"\nMiddle element =>"<<h->data;

}