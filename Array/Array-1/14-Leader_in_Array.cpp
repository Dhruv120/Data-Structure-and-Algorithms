/*
Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n)
{
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
            ans.push_back(maxi);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
}