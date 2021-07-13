/*
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
*/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
         // 1 2 3 4 5
        // Loop to check boundary
        // condition and for swapping
        while (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    // Checking any element which
    // is not equal to i+1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }

    // Nothing is present return last index
    return n + 1;
}

int main()
{
}