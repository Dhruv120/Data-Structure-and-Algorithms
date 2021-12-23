#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; 

class Solution
{
    public:
   
    int getCount(struct Node* head)
    {
       Node * curr = head;
        int count=0;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }    

        return count;
    }
};
    