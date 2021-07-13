/*
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
*/


/*
Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
*/

/*
modified array = 31 8 27 16 23
if we % it ---> original array
if we / it ---> answer array
*/
#include <bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n)
{
   int max_idx = n-1;
   int min_idx = 0;
   int me =arr[n-1] +1;

   for(int i=0;i<n;i++)
   {
       if(i%2==0)
       {
           arr[i] = (arr[max_idx]%me)*me + arr[i];
           max_idx --;
       }
       else
       {
           arr[i] = (arr[min_idx]%me)*me + arr[i];
           min_idx++;
       }
   }

   for(int i=0;i<n;i++)
   {
       arr[i] = arr[i]/me;
   }

}

int main()
{
    
}
