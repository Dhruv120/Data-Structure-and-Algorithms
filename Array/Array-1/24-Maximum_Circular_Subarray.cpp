#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kadane(int arr[], int n)
    {
        int res = arr[0];
        int maxending = arr[0];

        for (int i = 1; i < n; i++)
        {
            maxending = max(arr[i], maxending + arr[i]);
            res = max(res, maxending);
        }
        return res;
    }

    int circularSubarraySum(int arr[], int n)
    {

        int normal = kadane(arr, n);

        if (normal < 0)
        {
            return normal;
        }

        int arrsum = 0;

        for (int i = 0; i < n; i++)
        {
            arrsum += arr[i];
            arr[i] = -arr[i];
        }

        int maxcir = arrsum + kadane(arr, n);

        return max(normal, maxcir);
    }
};

int main()
{
}