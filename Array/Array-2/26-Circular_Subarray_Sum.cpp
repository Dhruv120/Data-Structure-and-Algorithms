#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[] , int n)
{
    int currsum =0;
    int maxsum =INT_MIN ;
    
    for(int  i=0;i<n;i++)
    {
        currsum = currsum +arr[i];
        if(currsum <0)
        {
            currsum =0;
        }
        maxsum = max(maxsum ,currsum);
    }
   return maxsum ;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int wrapsum ;
    int nowrapsum ;

    nowrapsum =kadane(arr,n);
    int totalsum =0;
    for(int  i=0;i<n;i++)
    {
        totalsum = totalsum +arr[i];
        arr[i] =-arr[i];
    }
    wrapsum = kadane(arr,n) + totalsum ;

    cout<<max(wrapsum ,nowrapsum)<<endl;

}