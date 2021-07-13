#include <iostream>
using namespace std;

int kadane(int arr[],int n)
{
    int maxsum =0;
    int currsum =0;

    for(int i=0;i<n;i++)
    {
        currsum + = arr[i];
        if(currsum>maxsum)
        {
            maxsum = currsum;
        }
        else if(cursum<0)
        {
            currsum=0;
        }
    }
    return maxsum ;
}



int main()
{

}