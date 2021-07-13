#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int target;
    cin>>target;

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    

    int r = 0;
    int c = m-1;
    bool found =false;
    while(r<n and c>=0)
    {
        if(target ==arr[r][c])
        {
            found =true;
        }
        if(arr[r][c] >target)
        {
            c--;
        }
        else
        {
            r++;
        }

    }
    if(found)
    {
        cout<<"Element found";
    }
    else{
        cout<<"Not found";
    }

}