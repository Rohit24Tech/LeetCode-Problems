class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
        int prev=prices[0];
        for(int i=0;i<prices.size();i++){
            maxi=max(maxi,prices[i]-prev);
                prev=min(prices[i],prev);
            }
        
        if(maxi<=0){
            return 0;
        }
        
        return maxi;
    }
};
