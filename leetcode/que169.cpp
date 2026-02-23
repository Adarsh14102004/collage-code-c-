#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};

int main() {
    Solution obj;
    
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};  // test input
    int result = obj.majorityElement(nums);

    cout << "Majority Element: " << result << endl;
    return 0;
}