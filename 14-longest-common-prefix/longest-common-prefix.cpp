class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end()) ;
        int n = strs.size() , m = strs[n - 1].size() ;
        string s = "" ;
        for(int i = 0 ; i < m ; i++){
            if(strs[0][i] != strs[n - 1][i]) return s ;
            else s += strs[0][i] ;
        }  
        return s ;  
    }
};