class Solution {
public:
    // it took ~ 2h30m
    // https://leetcode.com/problems/roman-to-integer/submissions/
    int romanToInt(string s) {
        int res=0;
        map <char,int> roman={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}};
         res+=roman[s[s.length()-1]];
        for(int i=s.length()-2;i>=0;i--)
        {
            if(roman[s[i]]<roman[s[i+1]])
            {
                res-=roman[s[i]];
            }
            else
            {
                res+=roman[s[i]];
            }
        }
        return res;
        }
    };
