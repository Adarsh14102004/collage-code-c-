#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    int left = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = left;
        left *= nums[i];
    }

    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = productExceptSelf(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}