#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int mx = INT_MIN;
        int smx = INT_MIN;

        for (auto i : arr) {
            mx = max(mx, i);
        }

        for (auto i : arr) {
            if (i > smx && i != mx) {
                smx = i;
            }
        }

        return smx == INT_MIN ? -1 : smx;
    }
};

int main() {
    vector<int> arr = {12, 45, 1, 33, 55, 19};  // You can change input here
    Solution obj;
    int result = obj.getSecondLargest(arr);
    cout << "Second largest element is: " << result << endl;

    return 0;
}
