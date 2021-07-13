//ALL CLEAR
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int x;

    int i;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter X :";
    cin >> x;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)

        {
            break;
        }
    }

    if (i < n)
    {
        n = n - 1;
        for (int j = i; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
    }

    cout << "Modified array is \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}