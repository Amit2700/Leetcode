class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> pref(n) ;
        pref[0] = nums[0] ;
        vector<int> suff(n) ;
        suff[n - 1] = nums[n - 1] ;
        for(int i = 1 ; i < n ; i++) pref[i] = nums[i] * pref[i - 1] ;
        for(int j = n - 2 ; j >= 0 ; j--)  suff[j] = nums[j] * suff[j + 1] ;
        vector<int> ans(n) ;
        for(int i = 0 ; i < n ; i++){
            if(i == 0) ans[i] = suff[i + 1] ;
            else if(i == n - 1) ans[i] = pref[i - 1] ;
            else ans[i] = pref[i - 1] * suff[i + 1] ;
        }
        return ans ;
    }
};