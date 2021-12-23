#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " --> ";
        curr = curr->next;
    }
}



struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    Node * curr1 = first;
    Node * curr2 = second;

    while(curr1!=NULL)
    {
        curr1 = curr1->next;
    }
    while(curr2!=NULL)
    {
        curr2 = curr2->next;
    }

    Node * dummy = new Node (-1);
    Node * curr3 = dummy;

    while(curr1->next!=NULL && curr2->next!=NULL)
    {
       // curr3->next = (curr1->data + curr2->data); 
    }
}


int main()
{

}