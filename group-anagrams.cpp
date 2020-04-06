static const auto _ = []() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        https://leetcode.com/problems/group-anagrams/submissions/
        //new thing that I doscovered 
        //have to check the sol
        vector<string> sorted (strs.begin(),strs.end());
        vector<vector<string>>res; 
        unordered_map<string,vector<string>>dic; // creating hashmap like this
        for(auto & s:strs){
            string key=s;
            sort(key.begin(),key.end());
            dic[key].push_back(s);
        }
        for(auto & kv:dic){
            res.push_back(kv.second);
        }
        return res;
    }
};
