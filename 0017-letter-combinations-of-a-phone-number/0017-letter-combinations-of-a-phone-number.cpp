class Solution {
public:
    void solve(int idx, map<char, string>& mpp, string& temp, vector<string>& ans, string& digits) {
        if(idx == digits.size()) {
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < mpp[digits[idx]].size(); i++) {
            temp.push_back(mpp[digits[idx]][i]);
            solve(idx+1, mpp, temp, ans, digits);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char, string> mpp;
        mpp['2'] = "abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";

        string temp = "";
        vector<string> ans;

        solve(0, mpp, temp, ans, digits);

        return ans;
    }
};