class Solution {
    //Kadanes Algorithm
public:
    int maxSubArray(vector<int>& nums) {
        int local=nums[0],global=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            local=max(nums[i],local+nums[i]);
            global=max(local,global);
        }
        return global;
    }
};
