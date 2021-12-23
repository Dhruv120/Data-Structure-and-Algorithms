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

node *merge(node *head1, node *head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummy = new node(-1);
    node *p3 = dummy;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

     while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummy->next;
}

int main()
{
    node *head1 = new node(1);
    node *temp1 = new node(4);
    node *temp2 = new node(5);
    node *temp3 = new node(7);

    head1->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    node *head2 = new node(2);
    node *tem1 = new node(3);
    node *tem2 = new node(6);

    head2->next = tem1;
    tem1->next = tem2;

    node * newhead = merge(head1 , head2);
    printlist(newhead);
}