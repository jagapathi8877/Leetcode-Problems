class Solution {
public:
    int computeArea(int x1, int y1, int x2, int y2, int a1, int b1, int a2, int b2) {
        int area1 = abs((x1-x2) * (y1-y2));
        int area2 = abs((a1-a2) * (b1-b2)) ;
        int l= 0 , b = 0;
        if(a1 < x2 && a2 > x1) l = abs(min(a2,x2) - max(x1,a1)) ;
        if(b1 < y2 && b2 > y1) b = abs(min(y2,b2) - max(y1,b1)) ;
        return area1 + area2 - (l*b) ;
    }
};