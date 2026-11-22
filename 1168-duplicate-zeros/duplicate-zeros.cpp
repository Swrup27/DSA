class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       int zeros = 0;
         for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
                zeros++;
            }
        }

       int i = arr.size()-1;
       int j = arr.size()+ zeros- 1;
         while(i >= 0) {

            if(j < arr.size()) {
                arr[j] = arr[i];
            }

            if(arr[i] == 0) {
                j--;

                if(j < arr.size()) {
                    arr[j] = 0;
                }
            }

            i--;
            j--;
        }
    }
};