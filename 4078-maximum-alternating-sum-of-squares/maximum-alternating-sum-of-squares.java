class Solution {
    public long maxAlternatingSum(int[] nums) {
        int n = nums.length ;
        for(int i = 0 ; i < n ; i++) nums[i] = Math.abs(nums[i]) ;
        Arrays.sort(nums) ;
        int l = 0 , r = n - 1 ;
        long sum = 0 ;
        while(l <= r){
            if(l == r){
                sum += (nums[r]*nums[r]) ;
                l++ ; r-- ;
                break ;
            }
            sum += nums[r]*nums[r] ;
            sum -= nums[l]*nums[l] ;
            l++ ; r--;
        } 
        return sum ;    
    }
}