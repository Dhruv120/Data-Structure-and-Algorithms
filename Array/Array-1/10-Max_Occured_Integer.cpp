/*
Given n integer ranges, the task is to find the maximum occurring integer in these ranges. If more than one such integer exits, find the smallest one. The ranges are given as two arrays L[] and R[].  L[i] consists of starting point of range and R[i] consists of corresponding end point of the range.
*/

/*
For example consider the following ranges.
L[] = {2, 1, 3}, R[] = {5, 3, 9)
Ranges represented by above arrays are.
[2, 5] = {2, 3, 4, 5}
[1, 3] = {1, 2, 3}
[3, 9] = {3, 4, 5, 6, 7, 8, 9}
The maximum occurred integer in these ranges is 3.
*/

#include <bits/stdc++.h>
using namespace std;

int maxOccured(int L[], int R[], int n, int maxx)
{
    int arr[maxx] = {0};

    for (int i = 0; i < n; i++)
    {
        arr[L[i]] += 1;
        arr[R[i] + 1] -= 1;
    }

    int maxi = arr[0], res = 0;
    for (int i = 1; i < maxx; i++)
    {
        arr[i] += arr[i - 1]; // PREFIX SUM

        if (maxi < arr[i])
        {
            maxi = arr[i];
            res = i;
        }
    } 
}

int main()
{
}
