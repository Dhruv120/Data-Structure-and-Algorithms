#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    //Function to remove duplicates from unsorted linked list.
    void removeDuplicates(struct Node *start)
    {
        // Hash to store seen values
        unordered_set<int> seen;

        /* Pick elements one by one */
        struct Node *curr = start;
        struct Node *prev = NULL;
        while (curr != NULL)
        {
            // If current value is seen before
            if (seen.find(curr->data) != seen.end())
            {
                prev->next = curr->next;
                delete (curr);
            }
            else
            {
                seen.insert(curr->data);
                prev = curr;
            }
            curr = prev->next;
        }
    }
};