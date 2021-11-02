#include<bits/stdc++.h>
using namespace std;


string reversed(int arr[])
{
    int p=0;
    int q=arr.size()-1;
    while(p<q)
    {
        swap(arr[p],arr[q]);
        p++;
        q--;
    }
    return arr;
}

int main()
{
    int arr[]={1,2,3,4,5};
    reversed(arr);
    return 0;
}