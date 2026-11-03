class Solution {
public:
    string removeDuplicates(string s) {

        string ans = "";
        int i = 0;

        while (i < s.length()) {

            if (ans.size() > 0 && ans.back() == s[i]) {
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }

            i++;
        }

        return ans;
    }
};