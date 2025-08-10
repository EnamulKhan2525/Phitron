#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void print_linked_list(Node* head)
{
    Node*tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
void insert_at_tail(Node* &head, Node*&tail, int val)
{
    Node*newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
    
}
void delete_at_tail(Node*&head, Node*&tail)
{
    Node*tmp=head;
    while (tmp->next!=tail)
    {
        tmp=tmp->next;
    }
    Node* deletenode =tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    tail=tmp;
    
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    delete_at_tail(head,tail);
    print_linked_list(head);
    
    return 0;
}