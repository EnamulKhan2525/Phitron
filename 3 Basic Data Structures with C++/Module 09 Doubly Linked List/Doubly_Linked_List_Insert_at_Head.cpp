#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print_forword(Node*head)
{
    Node*tmp=head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
void insert_at_head(Node*&head,int val)
{
    Node*newnodw=new Node(val);
    Node*tmp=head;
    newnodw->next=head;
    head->prev=newnodw;
    head=newnodw;
}
int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*tail=new Node(30);
    head->next=a;
    a->prev=head;

    a->next=tail;
    tail->prev=a;
    insert_at_head(head,100);
    print_forword(head);
    return 0;
}