// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void merge(int arr1[], int arr2[], int n, int m) 
	{
	    // code here
	    float gap=ceil((n+m)/2);
	    while(gap>0)
	    {
	        int p=0,q=gap;
	       // cout<<gap<<endl;
	        if(gap>n-1)
	        {
	            q=gap-n;
	            while(p<n && q<m)
    	        {
    	            if(arr1[p]>arr2[q])swap(arr1[p],arr2[q]);
    	            p++;
    	            q++;
    	        }
    	        p=0;
    	        while(p<m && q<m)
    	        {
    	            if(arr2[p]>arr2[q])swap(arr2[p],arr2[q]);
    	            p++;
    	            q++;
    	        }
    	        
	        }
	        else
	        {    while(p<n && q<n)
    	        {
    	            if(arr1[p]>arr1[q])swap(arr1[p],arr1[q]);
    	            p++;
    	            q++;
    	        }
    	        q=0;
    	        while(p<n && q<m)
    	        {
    	            if(arr1[p]>arr2[q])swap(arr1[p],arr2[q]);
    	            p++;
    	            q++;
    	        }
    	        p=0;
    	        while(p<m && q<m)
    	        {
    	            if(arr2[p]>arr2[q])swap(arr2[p],arr2[q]);
    	            p++;
    	            q++;
    	        }
	            
	        }
	        if(gap!=1)
	        gap=ceil(gap/2);
	        else gap=0;
	        
	    }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends