
~
~
~
~
~
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //used set and pushed value in it, if repeated found then return
        set <int> seen;
        for(int i=0;i<nums.size();i++)
        {
           if (seen.find(nums[i]) != seen.end()) {
               return nums[i];
           }
            seen.insert(nums[i]);
        }
        return -1;
    }
};
