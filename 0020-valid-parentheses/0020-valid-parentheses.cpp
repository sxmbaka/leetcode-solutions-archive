class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[')
                st.push(i);
            else {
                if (st.empty())
                    return false;
                else if (i == '}' and st.top() != '{' or i == ')' and st.top() != '(' or i == ']' and st.top() != '[')
                    return false;
                else st.pop();
            }
        }
        if (! st.empty())
            return false;
        return true;
    }
};