class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //https://leetcode.com/problems/rotate-image/
        // very easy but tricky to think
        // start thinking by transposing it and then think further
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix.size();j++)
            {
                // swap(matrix[i][j],matrix[j][i]);
                int tmp;
                tmp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=tmp;
            }
        }
        // // Had to take assist for this part
        for(int i=0;i<matrix.size();i++)
        {
            int left=0;
            int right=matrix.size()-1;
            while(left<right)
            {
                swap(matrix[i][left],matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};
