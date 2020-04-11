class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> res;
        //very easy but took me 45 mins as it was gettng overflowed
        // https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
        // figured out the idea but was not able to think abs
        for(int i=0;i<nums.size();i++)
        {
       if (nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;
                    
        }
        for(int i=0;i<nums.size();i++)
            if(nums[i]>0)
                res.push_back(i+1);
        return res;
    }
};
