class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> seen(A[0].size(), vector<int>(A.size(), 0));
        // Think how to transpose matrix
        // https://leetcode.com/problems/transpose-matrix/submissions/
        // think for changing rows and column
        for(int i=0;i<A[0].size();i++)
        {
            for(int j=0;j<A.size();j++)
            {
                seen[i][j]=A[j][i];
            }

        }
        return seen;
    }
};
