class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // https://leetcode.com/problems/first-missing-positive/
        // was thinking right about making numbers as negative
        //first ignore all the nos which as <0 || >nums.size()-1
        bool hasZero=false;
            for(int i=0;i<nums.size();i++)
            {
             if(nums[i]==1)
                {
                    hasZero=true;
                }
            }
        if(!hasZero) return 1;
        for(int i=0;i<nums.size();i++)
            if(nums[i]<1 || nums[i]>nums.size())
            {
                cout<<nums[i]<<endl;
                nums[i]=1;
            }
                
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]>0)
            {
                nums[abs(nums[i])-1]*=-1;
            }
        }
        for(int i=0;i<nums.size();i++)
            if(nums[i]>0)
                return i+1;
        return nums.size()+1;
    }
};
// n square problem
//         for(int i=1;;i++)
//         {
//             bool find=false;
//             for(int j=0;j<nums.size();j++)
//             {
//                 if(i==nums[j])
//                 {
//                     find=true;
//                     break;
//                 }
//             }
//             if(!find)
//                 return i;
//         }
