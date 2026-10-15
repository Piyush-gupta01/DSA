class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(heights.begin(), heights.end());
        int answer = 0;
        for(int i=0, j=0; i<=heights.size()-1, j<=expected.size()-1; i++, j++){
            if(heights[i] != expected[j]){
                answer++;
            }
        }
        return answer;
    }
};