class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        n = len(prices) 
        profit = 0 
        buy = prices[0]
        for i in range(n) :
            profit = max(profit , prices[i] - buy) 
            buy = min(buy , prices[i])
        return profit
        
        