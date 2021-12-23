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

node *insertathead(node *head ,int x)
{
    node * temp = new node(x);
    if(head==NULL)
    {
        temp->next =temp;
        temp->prev =temp;
        return temp;
    }
    temp->prev =head->prev;
    temp->next =head;
    head->prev->next =temp;
    head->prev =temp;
    return temp;

}
int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);

    head->next=temp1;
    temp1->next =temp2;
    temp2->next =head;
    temp1->prev=head;
    temp2->prev=temp1;
    head->prev =temp2;


}