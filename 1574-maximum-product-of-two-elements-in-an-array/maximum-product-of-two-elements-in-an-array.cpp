class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int answer = INT_MIN;
        for(int i=0; i<=nums.size()-1; i++){
            for(int j=i+1; j<=nums.size()-1; j++){
                if((nums[i] - 1) * (nums[j] - 1) > answer){
                    answer = (nums[i] - 1) * (nums[j] - 1);
                }
            }
        }
        return answer;
    }
};