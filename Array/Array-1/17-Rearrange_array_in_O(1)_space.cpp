/*
Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].
*/

#include <bits/stdc++.h>
using namespace std;

void arrange(long long arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[arr[i]] % n) * n + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / n;
    }
}

int main()
{
}