/*
Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 
*/

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end)
{
    while(start<=end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateArr(int arr[], int d, int n)
{
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
}

int main()
{
}