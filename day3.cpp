//rotate an array by d elements
#include <iostream>
#include <vector>
using namespace std;
class solution {
    public:
    void reverseArray(vector<int> &arr, int st, int en){
        while(st < en) {
            swap(arr[st], arr[en]);
            st++;
            en--;
        }
    } 
    void rotateArray(vector<int> &arr, int d) {
        int n = arr.size();
        d = d % n; 
        reverseArray(arr, 0, n - 1);
        reverseArray(arr, 0, n - d - 1); 
        reverseArray(arr, n - d, n - 1); 
    }
};
     
// Next Permutation
#include <iostream>
#include <vector>
using namespace std;
class solution {
    public:
    
}
