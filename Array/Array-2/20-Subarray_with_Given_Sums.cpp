// NOT CLEAR
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    int i =0;
    int j=0;
    int st =-1;
    int en =-1;
    int sum =0;

    while(j<n && sum+a[j]<=s)
    {
        sum = sum +a[j];
        j++;
    }

    if(sum==s)
    {
        cout<<i+1<<" "<<j;
    }

    while(j<n)
    {
        sum += a[j];
        while(sum>s)
        {
            sum = sum - a[i];
            i++;
        }

        if(sum==s)
        {
            st =i+1;
            en =j+1;
            break;
        }
        j++;
    }

    cout<<st<<" "<<en;
}