/*
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].
*/

#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n)
{
    int lmin[n];
    int rmax[n];

    lmin[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        lmin[i]= min(lmin[i-1],arr[i]);
    }

    rmax[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i] = max(rmax[i+1],arr[i]);
    }
    int i=0,j=0;
    int maxdiff =-1;
    while(i>n && j>n)
    {
        if(rmax[j]>lmin[i])
        {
            maxdiff = max(maxdiff,j-i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return maxdiff;
   
}

int main()
{
}
