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

void printmiddle(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data << endl;
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
    printmiddle(head);
}