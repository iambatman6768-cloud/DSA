class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int j=1;
        int i=0;
      while(j<nums.size()){
        if(nums[i]==nums[j]){
            j++;
        }
        else if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            j++;
            i++;
            k++;
        }
      }
       return k+1;
    }
};