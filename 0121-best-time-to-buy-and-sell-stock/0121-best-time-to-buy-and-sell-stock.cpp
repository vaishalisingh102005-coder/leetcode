class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int greatest=0;
        int minprice=prices[0];
        for(int price : prices){
            minprice=min(minprice,price);
            greatest=max(greatest,price-minprice);
        }
        return greatest;
        
            
        
        

    }
};