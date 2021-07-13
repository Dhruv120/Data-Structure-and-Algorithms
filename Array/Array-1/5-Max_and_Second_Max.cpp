/*
Given an array arr[] of size N of positive integers which may have duplicates. The task is to find the maximum and second maximum from the array, and both of them should be distinct, so If no second max exists, then the second max will be -1.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int n, int arr[])
    {
        vector<int> ans;
        int maxi = INT_MIN;
        int smaxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = max(maxi, arr[i]); // maximum
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == maxi)
            {
                continue;
            }
            if (arr[i] > smaxi)
            {
                smaxi = max(smaxi, arr[i]);
            }
        }
        if (smaxi == INT_MIN)
        {
            smaxi = -1;
        }

        ans.push_back(maxi);
        ans.push_back(smaxi);

        return ans;
    }
};

int main()
{
}