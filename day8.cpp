// maximum product subarray
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n =arr.size();
        int res =INT_MIN;
        int p,s;
        p=s=1;
        for(int i=0;i<n;i++){
            if(p==0)p=1;
            if(s==0)s=1;
            p*=arr[i];
            s*=arr[n-i-1];
            res=max({res,p,s});
        }
        return res;
    }
};

//smallest missing positive integer
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n =arr.size();
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            if (arr[i]<0){
                arr[i]=0;
            }
            mx =max(mx,arr[i]);
        }
        mx+=1;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                int ind =arr[i]%mx-1;
                if(ind >=0 && ind <n)
                arr[ind]+=mx;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]/ mx==0)
            return i+1;
        }
        return n+1;
    }
};