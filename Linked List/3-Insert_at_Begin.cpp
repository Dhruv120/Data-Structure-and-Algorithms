#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next; // self referentail
    node(int x)
    {
        data=x;
        next=NULL;
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


node *insertbegin(node *head , int x)
{
   node *temp =new node(x);
   temp->next =head;
   return temp;
}


int main()
{
    node *head = NULL;
    head = insertbegin(head,30);
    head = insertbegin(head,20);
    head = insertbegin(head,10);
    printlist(head);
    
}