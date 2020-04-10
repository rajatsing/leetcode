class Solution {
public:
    //https://leetcode.com/problems/backspace-string-compare/submissions/
    //took me ~15 hours to subkit correct solution
    bool backspaceCompare(string S, string T) {
        int cS=0,bS=0,cT=0,bT=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='#') bS++; //step1
        }
        for(int i=0;i<T.length();i++)
        {
            if(T[i]=='#') bT++; //step1
            
        }
        int index=S.length()-1;
        while(bS!=0 && index>0) 
        {
            if(S[index]=='#' && S[index-1]!='#') //step2
            { 
                S.erase(index-1,2); //step2
                bS--;
                index=S.length()-1; //going back to the end of the string again
                continue;
            }
            index--;
        }
        index=T.length()-1;
        while(bT!=0 && index>0)
        {
            if(T[index]=='#' && T[index-1]!='#') //step2
            { 
                T.erase(index-1,2); //step2
                bT--;
                index=T.length()-1; // going back to the end of the string again
                continue;
            }
            index--;
        }
        //removing spaces from here
        index=0;
        while(bS!=0)
        {
            if(S[index]=='#') //step 3
            {
                S.erase(index,1);
                bS--;
            }
        }
        index=0;
        while(bT!=0)
        {
            if(T[index]=='#') //step 3
            {
               T.erase(index,1);
                bT--; 
            }
        }
        if(S==T) //comparing finally as all the # are removed
            return true;
        return false;
    }
};
