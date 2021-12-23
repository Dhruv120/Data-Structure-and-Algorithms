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
int countLoopNodespoint(struct Node *n)
{
    int res = 1;
    struct Node *temp = n;
    while (temp->next != n)
    {

        res++;
        temp = temp->next;
    }
    return res;
}

int countLoopNode(struct Node *list)
{

    struct Node *slowPtr = list, *fastPtr = list;
    while (slowPtr && fastPtr && fastPtr->next)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;

        if (slowPtr == fastPtr)
            return countLoopNodespoint(slowPtr);
    }
    return 0;
}

int main()
{
}
