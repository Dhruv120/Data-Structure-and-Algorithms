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
    while (curr != NULL)
    {
        cout << curr->data << " --> ";
        curr = curr->next;
    }
}

node *reversek(node *head,int k)
{
   node * prevptr = NULL;
   node * currptr=head;
   node * nextptr ;

    int count =0;
   while(currptr !=NULL && count<k)
   {
       nextptr = currptr->next;
       currptr->next=prevptr;
       prevptr = currptr;
       currptr =nextptr;
    count++;
   }

   if(nextptr !=NULL)
   {
       head->next = reversek(nextptr ,k);
   }

   return prevptr;
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

    head = reversek(head,2);
    printlist(head);
}