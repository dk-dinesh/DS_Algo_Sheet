#include<bits/stdc++.h>
using namespace std;

void check_duplicate(string str)
{
    unordered_map<char,int>umap;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        umap[str[i]]++;
    }
    for(auto x:umap)
    {
        if(x.second>1)
        cout<<x.first<<"-"<<x.second<<endl;
    }
}

    

int main()
{
    string str;
    cin>>str;
    check_duplicate(str);
    return 0;
}