class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        int i = 0, len = s.length(), lineNo = 0;
        ArrayList<String> ansList = new ArrayList<>();
        while (i < len) {
            String line = "";
            if (lineNo % (numRows - 1) == 0) {
                int j = numRows - 1;
                while (i < len && j >= 0) {
                    line = s.charAt(i) + line;
                    i++;
                    j--;
                }
                while (j > -1) {
                    line = "_" + line;
                    j--;
                }
            } else {
                for (int j = 0; j < numRows; j++) {
                    if (j == (lineNo % (numRows - 1))) {
                        line += s.charAt(i);
                        i++;
                    } else {
                        line += "_";
                    }
                }
            }
            lineNo++;
            ansList.add(line);
        }
        // System.out.println(ansList);
        String result = "";
        // while (val.hasNext()) {
        //     System.out.println((String)val.next());
        // }
        for (i = numRows - 1; i >= 0; i--) {
            Iterator val = ansList.iterator();
            while (val.hasNext()) {
                String temp = (String)val.next();
                if (temp.charAt(i) == '_') {
                    ;
                } else {
                    result += temp.charAt(i);
                }
            }
        }
        return result;
    }
}