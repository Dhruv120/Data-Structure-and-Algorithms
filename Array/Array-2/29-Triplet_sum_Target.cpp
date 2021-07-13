#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n;
    int sum;
    cin>>sum;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    

    sort(A,A+n);
    int i =0;
   

    for (int i = 0; i < n - 2; i++) 
    { 
        l = i + 1; 
  
        r = n - 1; 
        while (l < r) { 
            if (A[i] + A[l] + A[r] == sum) { 
                printf("Triplet is %d, %d, %d", A[i],  A[l], A[r]); 
                return true; 
            } 
            else if (A[i] + A[l] + A[r] < sum) 
                l++; 
            else // A[i] + A[l] + A[r] > sum 
                r--; 
        } 
    } 
}