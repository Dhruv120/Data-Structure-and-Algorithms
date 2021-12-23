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

void detect_remove_loop(node *head)
{
    node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }

    if(slow!=fast)
    {
        return;
    }
    slow= head;
    while(slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next=NULL;
}

int main()
{

    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(20);
    node *temp3 = new node(40);
    node *temp4 = new node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp2;
}