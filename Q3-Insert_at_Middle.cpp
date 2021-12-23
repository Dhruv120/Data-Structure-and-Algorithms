#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next; // self referentail
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertInMiddle(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = slow->next;
    slow->next = temp;

    return head;
}