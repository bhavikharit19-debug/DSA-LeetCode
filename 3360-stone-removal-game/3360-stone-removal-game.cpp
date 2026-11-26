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
                prevturn = "bob";
                prev--;
            }
            else if(prevturn == "bob") {
                n -= prev - 1;
                prevturn = "alice";
                prev--;
            }
        }

        return prevturn == "alice";
    }
};