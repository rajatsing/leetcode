class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //maintain left and right sumarray and thats it
        //https://leetcode.com/problems/find-pivot-index/
        if(nums.size()==1 && nums[0]==0)
            return 0;
        else if(nums.size()==1 && nums[0]!=0)
            return -1;
        int length=nums.size();
        vector<int> left(nums.size(),0);
        vector<int> right(nums.size(),0);
        for(int i=1;i<nums.size();i++)
        {
            left[i]=nums[i-1]+left[i-1];
            right[nums.size()-1-i]=nums[nums.size()-i]+right[nums.size()-i];
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(left[i]-right[i]==0)
                return i;
        }
        return -1;
    }
};
