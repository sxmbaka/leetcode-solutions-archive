class Solution {
    public ArrayList<Integer> spiralOrder(int[][] matrix) {
        int m = matrix.length, n = matrix[0].length;
        int leftBound = 0, rightBound = n - 1, topBound = 1, bottomBound = m - 1;
        boolean right = true, left = false, up = false, bottom = false;
        int i = 0, j = 0;
        ArrayList<Integer> res = new ArrayList<Integer>();
        for (int x = 0; x < m * n; x++) {
            res.add(matrix[i][j]);
            if (right) {
                if (j >= rightBound) {
                    right = false;
                    bottom = true;
                    i++;
                    rightBound--;
                } else {
                    j++;
                }
            } else if (bottom) {
                if (i >= bottomBound) {
                    bottom = false;
                    left = true;
                    j--;
                    bottomBound--;
                } else {
                    i++;
                }
            } else if (left) {
                if (j <= leftBound) {
                    left = false;
                    up = true;
                    i--;
                    leftBound++;
                } else {
                    j--;
                }
            } else if (up) {
                if (i <= topBound) {
                    up = false;
                    right = true;
                    j++;
                    topBound++;
                } else {
                    i--;
                }
            }
        }
        return res;
    }
}