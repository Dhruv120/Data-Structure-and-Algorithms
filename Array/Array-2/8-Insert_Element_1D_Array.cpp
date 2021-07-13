//ALL CLEAR
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int x;
    int loc;
    int i;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter X :";
    cin >> x;
    cout << "Enter location :";
    cin >> loc;
                                // 1 2 4 5 
    for (i = n; i >=loc; i--)
    {
        arr[i] = arr[i - 1];
    }

    n++;
    arr[loc - 1] = x;

    cout << "Modified array is \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}