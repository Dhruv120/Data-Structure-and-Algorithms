// OPTAMIZED APPROACH
// CUMULATIVE SUM APPROACH
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int cursum[n+1];
    cursum[0]=0; 
    
    for(int  i=1;i<=n;i++)
    {
        cursum[i] =cursum[i-1] +arr[i-1];
    }

    int maxsum =INT_MIN;

    for(int i =1;i<=n ;i++)
    {
        int sum =0;
        for(int j =0;j<n;j++)
        {
            sum = cursum[i] -cursum[j];
            /* to understand what is this:-
            for cummulative array :::: sum (o,n) - sum(0,1) + sum (2,n)
            sum(2,n) = sum(0,n) - sum (0,1)
            hence
              sum of subarray for particular  range  currsum [i] - cursum[j] 
             */
            maxsum =max(sum, maxsum);
        }
    }

    cout<<maxsum<<endl;

}