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

int getCount(node* head) 
{ 
    node* curr = head; 
    int count = 0; 
    while (curr != NULL) { 
        count++; 
        curr = curr->next; 
    } 
    return count; 
} 

int _getIntersection(int d, node* head1, node* head2) 
{ 
    node* current1 = head1; 
    node* current2 = head2; 
  
    for (int i = 0; i < d; i++) { 
        if (current1 == NULL) { 
            return -1; 
        } 
        current1 = current1->next; 
    } 
  
    while (current1 != NULL && current2 != NULL) { 
        if (current1 == current2) 
            return current1->data; 
  
        current1 = current1->next; 
        current2 = current2->next; 
    } 
  
    return -1; 
}

int getIntersection(node* head1, node* head2) 
{ 
    int c1 = getCount(head1); 
    int c2 = getCount(head2); 
    int d; 
  
    if (c1 > c2) { 
        d = c1 - c2; 
        return _getIntersection(d, head1, head2); 
    } 
    else { 
        d = c2 - c1; 
        return _getIntersection(d, head2, head1); 
    }
} 

int main()
{

    node *head = new node(10);
    node *temp1 = new node(21);
    node *temp2 = new node(33);
    node *temp3 = new node(48);
    node *temp4 = new node(55);
    node *temp5 = new node(42);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp5->next = temp2;
  
}