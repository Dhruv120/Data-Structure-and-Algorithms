/*
Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, then rotated.
A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation.
*/

#include <bits/stdc++.h>
using namespace std;

bool checkRotatedAndSorted(int arr[], int n)
{
    int x=0,y=0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1])
            x++;
        else
            y++;
    }
 
    // If till now both x,y are greater then 1 means
    // array is not sorted. If both any of x,y is zero
    // means array is not rotated.
    if (x == 1 || y == 1) {
        // Checking for last element with first.
        if (arr[n - 1] < arr[0])
            x++;
        else
            y++;
 
        // Checking for final result.
        if (x == 1 || y == 1)
            return true;
    }
 
    // If still not true then definetly false.
    return false;
}

int main()
{
}