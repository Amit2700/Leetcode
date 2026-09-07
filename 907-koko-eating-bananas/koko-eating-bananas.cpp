class Solution {
public:
    long long help(vector<int>& piles, long long mid) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + mid - 1) / mid; /* ceil(a / b) = (a + b - 1)/b */
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (help(piles, mid) <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
