class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for (int i = 2; i <= n; i++) {
            string old = s;
            s += "1";
            reverse(old.begin(), old.end());
            for (char &c : old) {
                c = (c == '0' ? '1' : '0');
            }
            s += old;
        }
        return s[k - 1];
    }
};