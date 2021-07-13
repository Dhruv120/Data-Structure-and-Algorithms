/*
Given an array Arr of n integers arranged in a circular fashion. Your task is to find the minimum absolute difference between adjacent elements.
*/

#include <bits/stdc++.h>
using namespace std;

int minAdjDiff(int arr[], int n)
{
    int mindiff =INT_MAX;
    int curr =0;
    for(int i=0;i<n;i++)
    {
        curr= abs(arr[i]-arr[i+1]);
        mindiff = min(curr,mindiff);
    }

    int x=  arr[n-1] - arr[0];

    mindiff = min(x,mindiff);
    return mindiff;
}

int main()
{
}