class Solution {
    public boolean isPalindrome(String s) {
        int i = 0, j = s.length() - 1;
        char c1, c2;
        while (i < j) {
            c1 = s.charAt(i);
            c2 = s.charAt(j);
            if (!Character.isLetterOrDigit(c1)) i++;
            else if (!Character.isLetterOrDigit(c2)) j--;
            else {
                if (Character.toLowerCase(c1) != Character.toLowerCase(c2)) return false;
                i++;
                j--;
            }
        }
        return true;
    }
}