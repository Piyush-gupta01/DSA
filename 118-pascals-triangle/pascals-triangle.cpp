class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;

            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    row.push_back(1);
                }
                else {
                    int value = 1;

                    for (int k = 1; k <= j; k++) {
                        value = value * (i - k + 1) / k;
                    }

                    row.push_back(value);
                }
            }

            ans.push_back(row);
        }

        return ans;
    }
};