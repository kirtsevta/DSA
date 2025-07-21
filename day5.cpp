//majority element
#include <iostream>
#include <vector>
using namespace std;
class Solution{
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n=arr.size();
        int cd1=0,cd2=0,c1=0,c2=0;
        for (auto i:arr)
        {
            if(i==cd1)
            {
                c1++;
            }
            else if(i==cd2)
            {
                c2++;
            }
            else if (c1==0)
            {
                cd1=i;
                c1=1;
            }
            else if (c2==0){
                cd2=i;
                c2=1;
            }
            else {
                c1--;
                c2--;
            }
        }
        int x=n/3;
        vector<int>ans;
        c1=0;
        c2=0;
        for(auto i:arr){
            if(i==cd1)c1++;
            else if(i==cd2)c2++;
        }
        if (c1>x)
        {
            ans.push_back(cd1);
        }
        if(c2>x)
        {
            ans.push_back(cd2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//stock buy and sell(with one limit)
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        
        int mnp =INT_MAX;
        int mxp=0;
        for(auto p : prices){
            if(p<mnp)
            {
                mnp=p;
            }
            int pr = p-mnp;
            mxp = max(pr,mxp);
        }
        return mxp;
    }
};
