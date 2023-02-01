class Solution {
    public boolean isValid(String s) {
        HashSet<Character> closing = new HashSet<Character>();
        closing.add(']');
        closing.add(')');
        closing.add('}');
        HashSet<Character> opening = new HashSet<Character>();
        opening.add('(');
        opening.add('{');
        opening.add('[');
        Stack<Character> st = new Stack<Character>();
        for (int i = 0; i < s.length(); i++) {
            if (opening.contains(s.charAt(i))) {
                st.push(s.charAt(i));
            } else {
                if (st.empty()) {
                    return false;
                }
                if (s.charAt(i) == ']') {
                    if (st.pop() != '[') {
                        return false;
                    }
                } else if (s.charAt(i) == '}') {
                    if (st.pop() != '{') {
                        return false;
                    }
                } else if (s.charAt(i) == ')') {
                    if (st.pop() != '(') {
                        return false;
                    }
                }
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
}