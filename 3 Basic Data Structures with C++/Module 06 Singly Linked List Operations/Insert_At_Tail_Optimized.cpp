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

void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node* newnode= new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    
    tail->next=newnode;
    tail=tail->next;
}
void print_linked_list(Node* head)
{
    Node* tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(59);
    head->next=a;
    a->next=b;
    b->next=tail;
    insert_at_tail(head,tail,100);
    insert_at_tail(head,tail,100);
    insert_at_tail(head,tail,500);
    insert_at_tail(head,tail,100);
    print_linked_list(head);
    
    
    return 0;
}