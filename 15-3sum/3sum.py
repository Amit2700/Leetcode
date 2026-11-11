class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        n = len(nums) 
        ans = []
        nums.sort() 
        for i in range(n) :
            if(i > 0 and nums[i] == nums[i - 1]) : 
                continue 
            l = i + 1 
            r = n - 1 
            while(l < r) :
                sum = nums[i] + nums[l] + nums[r] 
                if(sum == 0) :
                    ans.append([nums[i] , nums[l] , nums[r]]) 
                    l += 1
                    r -= 1 
                    while(l < r and nums[l] == nums[l - 1]) :
                        l += 1 
                    while(l < r and nums[r] == nums[r + 1]) : 
                        r -= 1 
                elif(sum < 0) :
                    l += 1 
                else :
                    r -= 1
        return ans  
        