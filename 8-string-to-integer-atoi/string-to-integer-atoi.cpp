class Solution {
public:
    int myAtoi(string s) {
        int n = s.size() ;
        int i = 0 ;
        while(i < n && s[i] == ' ') i++ ;
        int sign = 1 ;
        if(s[i] == '-' || s[i] == '+'){
            sign = s[i] == '-' ? -1 : 1 ;
            i++ ;
        }
        int result = 0 ;
        while(i < n && isdigit(s[i])){
            int digit = s[i] - '0';
            // Check overflow before updating result
            if (result > (INT_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
            i++;
        }
        return sign * result ;
    }
};