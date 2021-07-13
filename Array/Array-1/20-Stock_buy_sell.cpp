/*

*/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> stockBuySell(vector<int> arr, int n)
{
    vector<int > ans;
    int profit =0;
    int maxcount= INT_MIN;
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit = profit + ( arr[i] - arr[i-1] );
            count++;
             maxcount = max(count , maxcount);
        }
       
        else
        {
            count=0;
        }
    }
    ans.push_back(maxcount);
  //  return ans;
}

int main()
{

}