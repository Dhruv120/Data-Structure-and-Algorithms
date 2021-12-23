#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next; // self referentail
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printlist(node *head)
{
    node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" --> ";
        curr = curr->next;
    }
}


void printnthend(node *head ,int n)
{
    if(head==NULL)
    {
        return ;
    }
    node *first=head;
    for(int i=0;i<n;i++)
    {
        if(first==NULL)
        return;
        first=first->next;
    }

    node *second =head;
    while(first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}


int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    node *temp3 = new node(40);
    node *temp4 = new node(50);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    printnthend(head,2);
}