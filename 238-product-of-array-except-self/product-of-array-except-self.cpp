class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> premul(n) ;
        vector<int> sufmul(n) ;
        int pre = 1 , suf = 1 ;
        for(int i = 0 ; i < n ; i++){
            pre *= nums[i] ;
            suf *= nums[n - i - 1] ;
            premul[i] = pre ;
            sufmul[n - i - 1] = suf ;
        }
        vector<int> ans(n) ;
        for(int i = 0 ; i < n ; i++){
            if(i == 0) ans[i] = sufmul[i + 1] ;
            else if(i == n - 1) ans[i] = premul[i - 1] ;
            else ans[i] = premul[i - 1] * sufmul[i + 1] ;
        }
        return ans ;
    }
};