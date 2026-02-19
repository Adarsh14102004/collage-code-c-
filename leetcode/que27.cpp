// 27. Remove Element
//26. Remove Duplicates from Sorted Array
#include <vector>
using namespace std;

// remove element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];  
                k++;
            }
        }

        return k;  
    }
};