//ALL CLEAR
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    int i ,j;
    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    i = 0;
    j=n-1;
    while(j>i)
    {
        int temp=arr[i];
        arr[i] =arr[j];
        arr[j] =temp;
        j--;
        i++;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}