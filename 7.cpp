#include<bits/stdc++.h>
using namespace std;


void rotate(int arr[], int n)
{
    reverse(arr,arr+n-1);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5};
    rotate(arr,5);
    return 0;
}