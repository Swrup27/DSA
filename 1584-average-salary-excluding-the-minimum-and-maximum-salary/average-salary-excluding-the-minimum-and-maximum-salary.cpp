class Solution {
public:
    double average(vector<int>& salary) {
        int minimum = salary[0];
        int maximum = salary[0];
        int sum = 0;

        for(int i=0;i<salary.size();i++){
             int x = salary[i];
            
            minimum = min(minimum, x);
            maximum = max(maximum, x);
            sum += x;
        }

        return (double)(sum - minimum - maximum) / (salary.size() - 2);
    }
};