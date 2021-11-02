// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int flag=0;
	    int n=S.size();
	    int p=0,q=n-1;
        while(p<=q)
        {
            if(S[p]==S[q])
            {
                p++;
                q--;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag)return 0;
        return 1;

	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends