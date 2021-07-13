/*
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
*/

#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long arr[], int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum+ arr[i];
    }

    int sum2 =0;
    for(int i=0;i<n;i++)
    {
        sum2 = sum2 + arr[i];
        if(sum2 == (sum-sum2+arr[i]))
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
}