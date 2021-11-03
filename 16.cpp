// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int count=0;
    void merge(long long low, long long mid,long long high,long long arr[])
    {
        long long p=mid-low+1;
        long long q=high-mid;
        long long arr1[p],arr2[q];
        long long k=0,w=0;

        for(long long i=low;i<=mid;i++)
        {
            arr1[k]=arr[i];
            k++;
        }
        for(long long i=mid+1;i<=high;i++)
        {
            arr2[w]=arr[i];
            w++;
        }
        long long x=low,i=0,j=0;
        while(i<p && j<q)
        {
            if(arr1[i]>arr2[j])
            {
                count+=(p-i);
                arr[x++]=arr2[j++];
            }
            else
            {
                arr[x++]=arr1[i++];
            }
        }
        while(i<p)
        {
            arr[x++]=arr1[i++];
        }
        while(j<q)
        {
            arr[x++]=arr2[j++];
        }
        
    }
    
    
    void inversion(long long low,long long high,long long arr[])
    {
        
        if(low<high)
        {
            long long mid=low+(high-low)/2;
            inversion(low,mid,arr);
            inversion(mid+1,high,arr);
            merge(low,mid,high,arr);
            
        }
        
    }
    
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long low=0;
        long long high=N-1;
        inversion(low,high,arr);
        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends