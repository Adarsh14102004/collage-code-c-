// // Amstrong number
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int original = n;
//     int sum = 0;

    
//     while (n>0)
//     {
//         int digit = n % 10; 
//         sum += digit * digit * digit;
//         n /= 10;
//     }
    
//     // Armstrong sum nikalna
//    cout<<sum<<" ";
//     if (sum == original)
//         cout << "Armstrong Number";
//     else
//         cout << "Not Armstrong Number";

//     return 0;
// }

class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                
                if (nums[i] + nums[j] == target) {
                    return{i, j};
                }
            }
        }
        
        return {}; 
    }
}
