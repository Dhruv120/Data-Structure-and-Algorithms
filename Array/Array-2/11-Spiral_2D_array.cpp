//ALL CLEAR
#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin>>n>>m;;

    int arr[n][m];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int row_start = 0;
    int row_end =n-1;
    int column_start =0 ;
    int column_end =m-1;

    while(row_start<=row_end && column_start<=column_end)
    {
        //for first row
        for(int row =column_start ;row <=column_end ;row++)
        {
            cout<<arr[row_start][row]<<endl;
        }
        row_start++;

        //for last clumn
        for(int col =row_start ;col<=row_end ;col++)
        {
            cout<<arr[col][column_end]<<endl;
        }
        column_end--;

        for(int row = column_end ; row >= column_start ;row--)
        {
            cout<<arr[row_end][row]<<endl;
        }
        row_end--;

        for(int col = row_end ;col>=row_start ;col--)
        {
            cout<<arr[col][column_start]<<endl;
        }
        column_start++;
    }

}