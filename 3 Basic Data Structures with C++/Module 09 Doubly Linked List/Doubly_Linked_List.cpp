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

void print_forword_backforword(Node*head,Node*tail)
{
    Node*tmp=head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    Node*tmp_tail=tail;
    while (tmp_tail != NULL)
    {
        cout<<tmp_tail->val<<" ";
        tmp_tail=tmp_tail->prev;
    }
    
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
    print_forword_backforword(head,tail);
    return 0;
}