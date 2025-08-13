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
void insert_at_tail(Node*&head,Node*&tail,int val)
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
void same_same(Node*head,Node*head2)
{
    Node*tmp=head;
    Node*tmp2=head2;
    while (tmp != NULL && tmp2 != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            cout<<"NO";
            return;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
        
    }
    if(tmp != NULL || tmp2 != NULL)
    {
        cout<<"NO";
        return;
    }
    cout<<"YES";
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    Node*head2=NULL;
    Node*tail2=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    same_same(head,head2);
    return 0;
}