#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,-2,4,6,-3,-1,6,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int p=0;
    int q=size-1;
    int i=0;
    while(i<=q)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[p]);
            p++;
        }
        if(arr[i]>0)
        {
            swap(arr[i],arr[q]);
            q--;
            continue;
        }
        i++;
    }

    for(auto x:arr)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}