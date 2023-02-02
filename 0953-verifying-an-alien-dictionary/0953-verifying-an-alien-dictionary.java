class Solution {
    public int compare(String a, String b, HashMap map) {
        int l1 = a.length(), l2 = b.length();
        int i = 0;
        while (i < l1 && i < l2) {
            if ((int)map.get(a.charAt(i)) < (int)map.get(b.charAt(i))) {
                return -1;
            } else if ((int)map.get(a.charAt(i)) > (int)map.get(b.charAt(i))) {
                return 1;
            } else {
                i++;
            }
        }
        if (l1 < l2) {
            return -1;
        } else if (l1 > l2) {
            return 1;
        } else {
            return 0;
        }
    }
    public boolean isAlienSorted(String[] words, String order) {
        int len = words.length, i = 0;
        if (len == 1) {
            return true;
        }
        HashMap<Character, Integer> map = new HashMap<>();
        for (i = 0; i < 26; i++) {
            map.put(order.charAt(i), i);
        }
        i = 0;
        while (i < len - 1) {
            if (compare(words[i], words[i+1], map) > 0) {
                return false;
            }
            i++;
        }
        return true;
    }
}