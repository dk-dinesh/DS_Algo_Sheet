#include<bits/stdc++.h>
using namespace std;


void alternate(int arr[],int size)
{
    int p=0,q=size-1;
    while(p<q)
    {
        if(arr[p]<0)
        {
            swap(arr[p],arr[q]);
            p++;
            while(arr[q]<0)q--;
        }
        else p++;
    }
    int mid=q+1;p=1;
    cout<<mid<<endl;
    while(p<mid && q<size)
    {
        if(arr[p]>0)
        {
            swap(arr[p],arr[q]);
            p+=2;
            q++;
        }p+=2;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,-2,3,-4,-5,6};
    alternate(arr,6);
    return 0;
}