class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                int minn=INT_MAX;
                int index;
                for(int j=i;j<n;j++)
                {
                    if(nums[j]>nums[i-1] && nums[j]<=minn)
                    {
                        minn=nums[j];
                        index=j;
                    }
                }
                swap(nums[i-1],nums[index]);
                reverse(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};