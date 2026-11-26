class Solution {
public:
    bool canAliceWin(int n) {
        int prev = 0;
        string prevturn = "";
        if(n >= 10) {
            n -= 10;
            prev = 10;
            prevturn = "alice";
        }
        else return false;

        while(n >= prev - 1) {
            if(prevturn == "alice") {
                n -= prev - 1;
                prev = prev - 1;
                prevturn = "bob";
            }
            else if(prevturn == "bob") {
                n -= prev - 1;
                prev = prev - 1;
                prevturn = "alice";
            }
        }

        if(prevturn == "alice") {
            return true;
        }

        return false;
    }
};