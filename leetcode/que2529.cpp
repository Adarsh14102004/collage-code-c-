#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positiveCount = 0;
        int negativeCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                positiveCount++;
            } 
            else if (nums[i] < 0) {
                negativeCount++;
            }
        }

        return max(positiveCount, negativeCount);
    }
};

int main() {
    Solution obj;

    vector<int> nums = {-2, -1, -1, 1, 2, 3};  // test input
    int result = obj.maximumCount(nums);

    cout << "Maximum Count (pos vs neg): " << result << endl;

    return 0;
}