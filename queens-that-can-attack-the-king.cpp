this is shit ....bhuaauauuahauaaua

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        // https://leetcode.com/problems/queens-that-can-attack-the-king/
        //remember the -1,0,1 trick of moving across the graph
        vector <vector<int>> res;
        bool seen[8][8]={};
        for(auto& queen:queens) seen[queen[0]][queen[1]]=true;

        vector <int> directions={-1,0,1};
        for(auto dx:directions)
        {
            for(auto dy:directions)
            {
                if(dx==0 && dy==0) continue;
                int x=king[0];
                int y=king[1];
                while(dx+x>=0 && dx+x<8 && dy+y>=0 && dy+y<8)
                {
                    x+=dx;
                    y+=dy;
                    if(seen[x][y])
                    {
                        res.push_back({x,y});
                        break;
                    }
                }
            }
        }
        return res;
    }
};
