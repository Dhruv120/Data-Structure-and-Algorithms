#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *rotate(Node *head, int k)
{
    if (k == 0)
        return;
    Node *current = head;

    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return 0;

   
    Node *kthNode = current;

    // current will point to
    // last node after this loop
    // current will point to
    // node 60 in the above example
    while (current->next != NULL)
        current = current->next;

    // Change next of last node to previous head
    // Next of 60 is now changed to node 10
    current->next = head;

    // Change head to (k+1)th node
    // head is now changed to node 50
   head = kthNode->next;

    // change next of kth node to NULL
    // next of 40 is now NULL
    kthNode->next = NULL;


}