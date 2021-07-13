#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    int pd =arr[1]-arr[0];
    int ans =2;
    int currlen =2;
    int j =2;
    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            currlen++;
        }
        else{
            pd =arr[j]-arr[j-1];
            currlen =2;
        }
        ans =max(ans ,currlen);
      j++;  
    }

    cout<<ans<<endl;
}