#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    bool visited; // self referentail
    node(int x)
    {
        data = x;
        next = NULL;
        visited = false;
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

node *segragate(node *head)
{
    node *eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;
    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (eS == NULL)
            {
                eS = curr;
                eE = eS;
            }
            else
            {
                eE->next = curr;
                eE = eE->next;
            }
        }
        else
        {
            if (oS == NULL)
            {
                oS = curr;
                oE = oS;
            }
            else
            {
                oE->next = curr;
                oE = oE->next;
            }
        }
    }

    if (oS == NULL || eS == NULL)
    {
        return head;
    }
    eE->next = oS;
    oE->next = NULL;
    return eS;
}

int main()
{

    node *head = new node(10);
    node *temp1 = new node(21);
    node *temp2 = new node(33);
    node *temp3 = new node(48);
    node *temp4 = new node(55);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    printlist(head);
    cout<<endl;
    head = segragate(head);
    printlist(head);
}