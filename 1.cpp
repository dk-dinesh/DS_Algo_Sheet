#include<bits/stdc++.h>
using namespace std;


void reversed(int arr[],int n)
{
    int p=0;
    int q=n-1;
    while(p<q)
    {
        swap(arr[p],arr[q]);
        p++;
        q--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5};
    reversed(arr,5);
    return 0;
}