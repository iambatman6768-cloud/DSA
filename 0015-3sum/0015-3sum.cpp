class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
             if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int sum = (-1) * nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int s = nums[left] + nums[right];
                if (sum == s) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (right > left && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
                else if(s<sum){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return ans;
    }
};