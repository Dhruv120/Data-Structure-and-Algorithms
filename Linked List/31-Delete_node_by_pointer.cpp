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

void deletenode(node *ptr)
{
    node *temp = ptr->next;
    ptr->data = temp->data;
    ptr->next = temp->next;
    delete(temp);
}

int main()
{

//
}