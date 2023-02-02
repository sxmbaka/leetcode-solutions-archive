class Solution {
    public String simplifyPath(String path) {
        if (path.equals("/")) {
            return path;
        }
        int i = 0, len = path.length(), start, end;
        String dir;
        Stack<String> respath = new Stack<>();
        while (i < len) {
            if (path.charAt(i) == '/') {
                while (i < len && path.charAt(i) == '/') {
                    i++;
                }
            }
            start = i;
            if (start == len) {
                break;
            }
            while (i < len && path.charAt(i) != '/') {
                i++;
            }
            end = i - 1;
            System.out.println("start = " + start + " end = " + end);
            dir = path.substring(start, end+1);
            System.out.println(dir);
            if (dir.equals(".")) {
                ;
            } else if (dir.equals("..")) {
                if (!respath.empty()) {
                    respath.pop();
                }
            } else {
                respath.push(dir);
            }
            i++;
        }
        if (respath.empty()) {
            return "/";
        }
        if (respath.peek().equals("") || respath.peek().equals(" ")) {
            respath.pop();
        }
        String result = "";
        Iterator val = respath.iterator();
        while (val.hasNext()) {
            result += "/" + val.next();
        }
        return result;
    }
}