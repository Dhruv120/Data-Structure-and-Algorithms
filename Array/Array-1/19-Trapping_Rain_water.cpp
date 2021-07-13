/*
Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
*/

#include <bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n)
{
    int lmax[n];
    int rmax[n];

    lmax[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }

    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i],rmax[i+1]);
    }

    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + (min(lmax[i],rmax[i]) - arr[i]);
    }

    return sum;
}

int main()
{
}