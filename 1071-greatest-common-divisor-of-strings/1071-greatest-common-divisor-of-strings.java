class Solution {
    public boolean divides(String a, String b) {
        int la = a.length(), lb = b.length();
        if (la % lb != 0) {
            return false;
        }
        int start = 0, end = lb;
        while (end <= la) {
           if (!b.equals(a.substring(start, end))) {
               return false;
           }
           start += lb;
           end += lb;
        }
        return true;
    }
    public int gcd(int x, int y) {
        int gcd = 1;
        for(int i = 1; i <= x && i <= y; i++) {
            if(x%i==0 && y%i==0)  
                gcd = i;  
        }  
        return gcd;
    }
    public String gcdOfStrings(String str1, String str2) {
        System.out.println(divides("CODE", "LEET"));
        int i = gcd(str1.length(), str2.length());
        while (i >= 1) {
            String div = new String(str1.substring(0, i));
            if (divides(str1, div) && divides(str2, div)) {
                return div;
            }
            i--;
        }
        return "";
    }
}