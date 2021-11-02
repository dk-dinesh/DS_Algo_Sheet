#include<bits/stdc++.h>
using namespace std;


string reversed(string str)
{
    int p=0;
    int q=str.size()-1;
    while(p<q)
    {
        swap(str[p],str[q]);
        p++;
        q--;
    }
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<reversed(str)<<endl;
    return 0;
}