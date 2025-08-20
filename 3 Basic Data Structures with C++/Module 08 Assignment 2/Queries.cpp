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
void insert_at_tail(Node*&head, Node*&tail, int val)
{
    Node*newnodw=new Node(val);
    if (head==NULL)
    {
        head=newnodw;
        tail=newnodw;
        return;
    }
    tail->next=newnodw;
    tail=newnodw;
}
void insert_at_head(Node*&head, Node*&tail, int val)
{
    Node*newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void insert_at_any_pos(Node*&head,int pos, int val)
{
    Node*newnode=new Node(val);
    Node*tmp=head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next;
        if (tmp==NULL)
        {
            return; 
        }
        
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void print_linked_list(Node*head)
{
    Node*tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void delete_at_index(Node*&head, Node*&tail,int index)
{
    if(head==NULL)return;
    if (index==0)
    {
        Node*deletenode=head;
        head=head->next;
        if (head==NULL)
        {
            tail=NULL;
        }
        delete deletenode;
        return;
        
    }
    
    Node*tmp=head;
    for (int i = 0; i<index-1 && tmp != NULL; i++)
    {
        tmp=tmp->next;
    }
    if(tmp==NULL|| tmp->next==NULL)return;
    Node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    if (tmp->next==NULL)
    {
        tail=tmp;
    }
    
    delete deletenode;
}
int main()
{
    int t;
    cin>>t;
    Node*head=NULL;
    Node*tail=NULL;
    while (t--)
    {
        int pos,val;
        cin>>pos>>val;
        if (pos==0)
        {
            insert_at_head(head,tail,val);
        }
        else if (pos==1)
        {
            insert_at_tail(head,tail,val);
        }
        else if(pos ==2)
        {
            delete_at_index(head,tail,val);
        }
        print_linked_list(head);
        
    }
    
    return 0;
}