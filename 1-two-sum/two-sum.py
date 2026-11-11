class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mp = {}
        n = len(nums)
        for i in range(n):
            rem = target - nums[i]
            if rem in mp:
                return [i, mp[rem]]
            mp[nums[i]] = i
        return [-1, -1]