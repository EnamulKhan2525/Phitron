#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_linked_list(Node*head)
{
    Node*tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
void delete_at_any_pos(Node*head,int pos)
{
    Node*tmp=head;
    for (int i = 1; i < pos; i++)
    {
        tmp=tmp->next;
    }
    Node*deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode;
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
    delete_at_any_pos(head,1);
    print_linked_list(head);
    return 0;
}