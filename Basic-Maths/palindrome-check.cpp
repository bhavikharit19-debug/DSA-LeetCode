class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        int dup = x;
        long long revNm = 0;
        while(x > 0) {
            int lastdigit = x % 10;
            revNm = (revNm*10) + lastdigit;
            x = x / 10;
        }
        if(revNm == dup) return true;
        else return false;
    }
}; 
