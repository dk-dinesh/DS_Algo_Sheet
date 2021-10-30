// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of input array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        
        // Your code here
        
        int max_so_far=INT_MIN;
        int current_max=0;
        for(int i=0;i<n;i++)
        {
            current_max=current_max+arr[i];;
            if(current_max>max_so_far)
            {
                max_so_far=current_max;
            }
            if(current_max<0)
            {
                current_max=0;
            }
        }
        return max_so_far;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
