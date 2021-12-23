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
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    for(node *p =head->next ;p !=head ; p = p->next)
    {
        cout<<p->data<<" ";
    }
}


// void printlist(Node *head){
//     if(head==NULL)return;
//     Node *p=head;
//     do{
//         cout<<p->data<<" ";
//         p=p->next;
//     }while(p!=head);
// }


int main()
{
    node *head = new node(10);
    node *temp1 =new node(20);
    node *temp2 = new node(30);

    head->next =temp1;
    temp1->next =temp2;
    temp2->next=head;
    printlist(head);
}