#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(node *head )
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    for (node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}


node *deletehead(node *head )
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next ==head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    node * temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

node * deletekth(node *head , int k)
{
     if(head==NULL)
    {
        return head;
    }
    if(k==1)
    {
        return deletehead(head);
    }
    node *curr = head;
    for(int i=0;i<k-2;i++)
    {
        curr=curr->next;
    }

    curr->next = curr->next->next;
    return head;

}
int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    printlist(head);
    cout << endl;
    deletekth(head,2);
    printlist(head);
}