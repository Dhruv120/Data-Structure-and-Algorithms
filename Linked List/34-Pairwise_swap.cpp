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
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " --> ";
        curr = curr->next;
    }
}

void pairswap(node *head)
{
    node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        swap(curr->data, curr->next->data);
        curr = curr->next->next;
    }
}

node *pairwiseswap(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *curr = head->next->next;
    node *prev = head;
    head = head->next;
    head->next = prev;
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        prev = curr;
        node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
    prev->next = curr;
    return head;
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

    pairswap(head);
    printlist(head);
}