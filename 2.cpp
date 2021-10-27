#include<bits/stdc++.h>
using namespace std;


void min_max(int arr[],int size)
{
    int minn=min(arr[0],arr[1]);
    int maxx=max(arr[0],arr[1]);
    for(int i=3;i<size;i++)
    {
        minn=min(minn,arr[i]);
        maxx=max(maxx,arr[i]);
    }
    cout<<"min is "<<minn<<endl;
    cout<<"max is "<<maxx<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    min_max(arr,6);
    return 0;
}