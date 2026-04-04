class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0],maxpro=0;
        for(int i=1;i<prices.size();i++)
        {
            int curr_price=prices[i]-minprice;
            maxpro=max(maxpro,curr_price);
            minprice=min(minprice,prices[i]);

        }
        return maxpro;
    }
};
