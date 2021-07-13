// ALL CLEAR
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i ,j;
    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi =-1999999999;
    for(int  i=0;i<n;i++)
    {
        maxi = max(maxi ,arr[i]);
        cout<<maxi<<"  ";
    }

 
}