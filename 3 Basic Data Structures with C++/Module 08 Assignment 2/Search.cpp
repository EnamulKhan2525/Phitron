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
void search_linked_list(Node*head)
{
    int val;
    cin>>val;
    int index=0;
    Node*tmp=head;
    while (tmp != NULL)
    {
        if (val==tmp->val)
        {
            cout<<index<<endl;
            return;
        }
        index++;
        tmp=tmp->next;
    }
    cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        Node* head=NULL;
    Node* tail=NULL;  
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
    search_linked_list(head);
    }
    
    return 0;
}