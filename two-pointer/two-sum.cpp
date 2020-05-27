class Solution {
public:
    // https://leetcode.com/problems/two-sum/submissions/
    // solved after 2 months
    // took assistance from the solved code already
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> indices;
        for(int i=0;i<nums.size();i++)
        {
            if(indices.count((target-nums[i]))>0) {
                return {i,indices[target-nums[i]]};
            }
            indices[nums[i]]=i;
        }
        return {};
    }
};
