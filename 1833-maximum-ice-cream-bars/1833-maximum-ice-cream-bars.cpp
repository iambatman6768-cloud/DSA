class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int c=0;
        for(int cost:costs){
            if(coins<cost){
                break;
            }
            coins-=cost;
            c++;
        }
        return c;
    }
};