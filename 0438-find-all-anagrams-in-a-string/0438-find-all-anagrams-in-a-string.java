class Solution {
    public boolean isAnagram(String a, String b, int len) {
        int[] cnt1 = new int[26];
        Arrays.fill(cnt1, 0);
        int[] cnt2 = new int[26];
        Arrays.fill(cnt2, 0);
        for (int i = 0; i < len; i++) {
            cnt1[a.charAt(i)-'a']++;
            cnt2[b.charAt(i)-'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (cnt1[i] != cnt2[i]) {
                return false;
            }
        }
        return true;
    }
    public List<Integer> findAnagrams(String s, String p) {
        ArrayList<Integer> ans = new ArrayList<>();
        int l1 = s.length(), l2 = p.length();
        if (l2 > l1) {
            return ans;
        }
        for (int i = 0; i < l1 - l2 + 1; i++) {
            if (isAnagram(p, s.substring(i, i + l2), l2)) {
                ans.add(i);
            }
        }
        return ans;
        
    }
}