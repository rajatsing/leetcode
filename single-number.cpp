class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // https://leetcode.com/problems/single-number/
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=-1;
                nums[i+1]=-1;
            }

        }

        for(int i=0;i<nums.size();i++)
            if(nums[i]!=-1)
                return nums[i];
        return -1;
    }
};
