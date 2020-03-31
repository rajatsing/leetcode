class Solution {
public:
    void reverseString(vector<char>& s) {
        //2 mins sol
        //https://leetcode.com/problems/reverse-string/
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};
