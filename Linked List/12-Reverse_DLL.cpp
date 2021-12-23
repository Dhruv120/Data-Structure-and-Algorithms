#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void printlist(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << " <-"<<curr->data << "-> ";
        curr = curr->next;
    }
    cout << endl;
}

node *reversell(node *head)
{
    if(head==NULL|| head->next ==NULL)
    {
        return head;
    }
    node *temp =NULL;
    node *curr =head;
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev =curr->next;
        curr->next =temp;
        curr=curr->prev;
    }
    return temp->prev;
    
}

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printlist(head);
    cout<<endl;
    head = reversell(head);
    printlist(head);

    return 0;
}