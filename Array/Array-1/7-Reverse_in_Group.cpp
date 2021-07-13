/*
Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
*/

#include <bits/stdc++.h>
using namespace std;

void reverse(vector<long long> &arr, int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    for (int i = 0; i < n; i = i + k)
    {
        if (i + k < n)
            reverse(arr, i, i + k - 1);
        else
            reverse(arr, i, n - 1);
    }
}

int main()
{
}