// move all zeros to the end of the array

#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    void moveZerosToEnd(vector<int> &arr) {
        int i = 0, j = 0;
        while (i <arr.size())
       {
        if(arr[i]){
            swap(arr[i], arr[j]);
            j++;
        }
        i++;
        }
       } 
        
        };

// reverse the array

#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    void moveZerosToEnd(vector<int> &arr){
        int i= 0, j = arr.size() - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }}
    };
        





