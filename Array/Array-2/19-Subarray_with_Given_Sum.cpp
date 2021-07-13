//BRUTE FORCE APPROACH
#include <iostream>
using namespace std;

int main()
{
    int arr[5]= {1,2,7,3,5};
    int s =8;
    int  sum =0;

    for(int i=0;i<5;i++)
    {
        for(int j =i;j<5;j++)
        {
            sum = sum + arr[j];
            if(sum==s)
            {
                cout<<i<<" "<<j;
            }
            
        }
        sum=0;
    }
    return 0;
}