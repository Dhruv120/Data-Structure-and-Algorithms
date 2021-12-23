#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

void addNode(Node *head, int pos, int x)
{
    Node *t=new Node(x);
    if (head == NULL)
    {
        head = t;
        return;
    }

    Node *p = head;
    for (int i = 0; i < pos; i++)
    {
        p = p-> next;
    }
    if (p->next == NULL)
    {
        p->next = t;
        t->prev = p;
    }
    else
    {
        p->next->prev = t;
        t->next = p->next;
        t->prev = p;
        p->next = t;
    }
}

int main()
{
}