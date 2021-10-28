// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
            // coode here
        int i=0,j=0,k=n-1,p=0;
        while(p<=k)
        {
        
            if(a[p]==0)
            {
                swap(a[p],a[i]);
                i++;j++;
                
            }
            else if(a[p]==1)
            {
                swap(a[p],a[j]);
                j++;
            }
            else
            {
                swap(a[p],a[k]);
                k--;
                continue;
            }
            p++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends