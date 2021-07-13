/*
Given an array a[ ] of size N. The task is to find the median and mean of the array elements. Mean is average of the numbers and median is the element which is smaller than half of the elements and greater than remaining half.  If there are odd elements, the median is simply the middle element in the sorted array. If there are even elements, then the median is floor of average of two middle numbers in the sorted array. If mean is floating point number, then we need to print floor of it.

Note: To find the median, you might need to sort the array. Since sorting is covered in later tracks, we have already provided the sort function to you in the code.
*/

#include <bits/stdc++.h>
using namespace std;

int median(int arr[], int n)
{
    sort(arr,arr+n);
    if(n%2==0)
    {
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2 ;
    }
    else
    {
        return arr[n/2];
    }

    
}


int mean(int arr[], int n)
{
    int sum =0;
   for(int i=0;i<n;i++)
   {
       sum = sum+ arr[i];
   }
   return (sum/n);
}

int main()
{
}