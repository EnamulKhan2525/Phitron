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
    Node* tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
void linked_at_tail(Node* &head, Node* &tail, int val)
{
    Node*newndoe=new Node(val);
    if(head==NULL)
    {
        head=newndoe;
        tail=newndoe;
        return;
    }
    tail->next=newndoe;
    tail=newndoe;
}
void delete_at_pos(Node* &head, int pos)
{
    Node*tmp=head;
    for (int i = 1; i < pos; i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val== -1)
        {
            break;;
        }
        linked_at_tail(head,tail,val);
    }
    delete_at_pos(head,2);
    print_linked_list(head);
    return 0;
}