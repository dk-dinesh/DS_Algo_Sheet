class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) 
    {
        int n=inter.size();
        stack<vector<int>>st;
        sort(inter.begin(),inter.end());
        st.push(inter[0]);
        for(int i=1;i<n;i++)
        {
            if(inter[i][0]<=st.top()[1] && inter[i][1]>st.top()[1])
            {
                st.top()[1]=inter[i][1];
            }
            else if(inter[i][0]>st.top()[1])
            {
                st.push(inter[i]);
            }
        }
        vector<vector<int>>v;
        while(!st.empty())
        {
            {
                v.insert(v.begin(),st.top());
            }
            st.pop();
        }
        return v;
    }
};