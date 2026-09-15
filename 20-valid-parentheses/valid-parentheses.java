class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();

        for (char x : s.toCharArray()) {
            if (x == '(' || x == '{' || x == '[') {
                st.push(x);
            } else {
                if (st.empty()) {
                    return false;
                }

                char ch = st.pop();

                if ((ch == '(' && x == ')') ||
                    (ch == '{' && x == '}') ||
                    (ch == '[' && x == ']')) {
                    continue;
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
}
