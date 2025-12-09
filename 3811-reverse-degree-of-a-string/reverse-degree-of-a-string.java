class Solution {
    public int reverseDegree(String s) {
        int ans = 0 ;
        for(int i = 0 ; i < s.length() ; i++) ans += ((i+1)*(26 - (s.charAt(i) - 'a'))) ;
        return ans ;
    }
}