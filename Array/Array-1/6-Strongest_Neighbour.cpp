/*
Given an array arr[] of n positive integers. The task is to find the maximum for every adjacent pairs in the array.
*/

#include <bits/stdc++.h>
using namespace std;

void maximumAdjacent(int sizeOfArray, int arr[])
{
    for (int i = 0; i < sizeOfArray-1; i++)
    {
        arr[i] = max(arr[i],arr[i+1]);
    }
}

int main()
{
}