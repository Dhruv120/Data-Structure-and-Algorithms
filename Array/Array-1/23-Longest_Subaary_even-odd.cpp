/*
You are given an array of size n. Find the maximum possible length of a subarray such that its elements are arranged alternately either as even and odd or odd and even .
*/

#include <bits/stdc++.h>
using namespace std;

int maxEvenOdd(int a[], int n)
{
     int longest = 1;
    int cnt = 1;
 
    for (int i = 0; i < n - 1; i++) 
    {
 
        if ((a[i] + a[i + 1]) % 2 == 1) 
        {
            cnt++;
        }
        else 
        {
            longest = max(longest, cnt);
            cnt = 1;
        }
    }
 
    return max(cnt, longest);
   
}

int main()
{
}