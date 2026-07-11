class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        for (auto i : nums) {
            if (i < 0) {
                neg.push_back(i);
            } else {
                pos.push_back(i);
            }
        }
        for (int i = 0; i < pos.size(); i++) {
            pos[i] = pos[i] * pos[i];
        }
        for (int i = 0; i < neg.size(); i++) {
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(), neg.end());

        int i=0;
        int j=0;
        int x = 0;
        while (i<pos.size()&&j<neg.size()){
            if(pos[i]<neg[j]){
                nums[x]=pos[i];
                i++;
                x++;
            }
            else{
                nums[x]=neg[j];
                x++;
                j++;
            }
        }
        while(i<pos.size()){
            nums[x]=pos[i];
            x++;
            i++;
        }
        while(j<neg.size()){
            nums[x]=neg[j];
            x++;
            j++;
        }
        return nums;
    }
};