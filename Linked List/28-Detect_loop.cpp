#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next; 
    bool visited;// self referentail
    node(int x)
    {
        data = x;
        next = NULL;
        visited =false;
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

bool isloop(node* head)
{
    node * temp = new node(100);
    node * curr =head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
        {
            return false;
        }
        if(curr->next==temp)
        {
            return true;
        }
        node * curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
    }
    return false;
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
    temp4->next = temp3;

   
   cout<<isloop(head)<<endl;
   
}