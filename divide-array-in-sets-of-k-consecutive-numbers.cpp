class Solution {
public:
    //was not able to do 
    //copied from solutions
    // auto it = s.find(i); it == s.end()  is used to find element is present or not
    // https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/
    bool isPossibleDivide(vector<int>& nums, int k) {
    if (nums.size() % k != 0) return false;
    multiset<int> s(nums.cbegin(), nums.cend());
    while(!s.empty()) {
        int a = *s.begin();
        cout<<"a is"<<a<<endl;
        for (int i = a; i < a + k; ++i) {
            if (auto it = s.find(i); it == s.end())
                return false;
            else s.erase(it);
        }
    }
    return true;
    }
};
