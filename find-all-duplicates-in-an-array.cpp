class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     unordered_set<int> duplicate;
        //took assistance from the disscussion
        // was using the right way i.e to use set but was missing the login a little bit and using true n false condition.
        //https://leetcode.com/problems/find-all-duplicates-in-an-array/
    vector<int> res;
    for(auto it=nums.begin();it!=nums.end();it++)
    {
        if(duplicate.find(*it)!=duplicate.end())
        {
            res.push_back(*it);
        }
        else
            duplicate.insert(*it);
    }  
        return res;
    }
};
//  another approach
// remember this trick of making element as -1 if not already
// remember the range 1 ≤ a[i] ≤ n (n = size of array)
 vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0) {
                result.push_back(index + 1);
            }
            nums[index] = -nums[index];
        }
        return result;
    }
