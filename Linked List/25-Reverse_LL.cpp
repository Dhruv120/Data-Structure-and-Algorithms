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

// node *reverselist(node *head)
// {
//     vector<int> arr;
//     for (node *curr = head; curr != NULL; curr = curr->next)
//     {
//         arr.push_back(curr->data);
//     }
//     for (node *curr = head; curr != NULL; curr = curr->next)
//     {
//         curr->data = arr.back();
//         arr.pop_back();
//     }
//     return head;
// }

node *reverselist(node *head)
{
    node * curr =head;
    node * prev =NULL;
    while(curr!=NULL)
    {
        node *next =curr->next;
        curr->next =prev;
        prev=curr;
        curr=next;
    }
    return prev;

}

node * recursivereverse(node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node * newhead = recursivereverse(head->next);
    head->next->next = head;
    head->next=NULL;

    return newhead;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    printlist(head);
    cout<<endl;
    head = reverselist(head);
    printlist(head);
    cout<<endl;

    head =  recursivereverse(head);
    printlist(head);
    return 0;
}