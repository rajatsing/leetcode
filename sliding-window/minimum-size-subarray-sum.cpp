// https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {

public:
    int minSubArrayLen(int s, vector<int>& nums) {
        // this_thread::sleep_for(chrono::seconds(1)); 
        if(nums.size()==0 || s==0) {
            return 0;
        }
        int left=0,sum=0;
        int minimal=INT_MAX;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
            while(sum>=s) {
                minimal=min(minimal,i+1-left); // i+1-left is current size of 0 based index
                sum-=nums[left++];
            }
        }
        if(minimal==INT_MAX)
            return 0;
        return minimal;
    }
};
