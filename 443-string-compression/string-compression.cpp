class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int index = 0;
        int n = chars.size();

        while (i < n) {

            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[index] = ch;
            index++;

            if (count > 1) {
                string num = to_string(count);

                for (int j = 0; j < num.length(); j++) {
                    chars[index] = num[j];
                    index++;
                }
            }
        }

        return index;
    }
};