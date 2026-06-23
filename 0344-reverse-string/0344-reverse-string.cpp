class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
       reverse(s.begin(),s.end());
    }
};