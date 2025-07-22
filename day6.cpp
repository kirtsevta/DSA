// stock and buy (with no limit
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        long long profit = 0;
        for(int i =1 ; i<n; i++){
            if (prices[i]>prices[i-1])
            {
                profit+=(prices[i]-prices[i-1]);
            }
        }
        return static_cast<int>(profit);
    }
};