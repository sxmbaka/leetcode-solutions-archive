class Solution {
    public String simplifyPath(String path) {
        Stack<String> s = new Stack<>();
        String[] p = path.split("/");
        for (int i = 0; i < p.length; i++) {
            if (p[i].equals("..")) {
                if (!s.empty()) {
                    s.pop();
                }
            } else if (p[i].equals(".")) {
                ;
            } else if (!p[i].equals("")) {
                s.push(p[i]);
            }
        }
        if (s.empty()) {
            return "/";
        }
        String res = "";
        Iterator val = s.iterator();
        while (val.hasNext()) {
            res += "/" + val.next();
        }
        return res;
    }
}