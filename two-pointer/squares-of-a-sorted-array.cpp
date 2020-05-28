class Solution {
public:
    // https://leetcode.com/problems/squares-of-a-sorted-array/submissions/
    // took a while to solve
    vector<int> sortedSquares(vector<int>& A) {
    if(A.size()==1)
    {
        return {A[0]*A[0]};
        
    }
            vector <int> res;
        int p=0,n=0;
        for(int i=0;i<A.size();i++) {
            if(A[i]>-1) {
                p=i;
                n=i-1;
                break;
            }
        }
        cout<< "i is :" <<p <<endl;
        cout<< "j is :" <<n <<endl;
        
        while(n>=0 && p<A.size()) { 
            if (A[n]*A[n]>A[p]*A[p]) {
                    res.push_back(A[p]*A[p]);
                    p++;
                }
            else {
                 res.push_back(A[n]*A[n]);
                n--;
            }
        }
        
                while(n>=0) {
                res.push_back(A[n]*A[n]);
                n--;
        }
        while(p<A.size()) {
            res.push_back(A[p]*A[p]);
                    p++;
        }

        return res;
    }
};
