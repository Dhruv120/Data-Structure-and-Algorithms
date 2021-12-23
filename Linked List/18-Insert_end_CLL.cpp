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

void printlist(node *head)
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

node *insertend(node *head , int x)
{
    node * temp = new node(x);
    if(head==NULL)
    {
        temp->next =temp;    
    }
    else
    {
        node *curr=head;
        while(curr->next !=head)
        {
           curr = curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}


/*
node *insertend(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;    
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}
*/

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
    insertend(head, 40);
    printlist(head);
}