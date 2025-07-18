#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countWays(int index, int currentSum, const vector<int>& nums, int target, vector<unordered_map<int, int>>& dp) {
    if (index == nums.size()) {
        return currentSum == target ? 1 : 0;
    }
    if (dp[index].count(currentSum)) return dp[index][currentSum];

    int add = countWays(index + 1, currentSum + nums[index], nums, target, dp);
    int subtract = countWays(index + 1, currentSum - nums[index], nums, target, dp);

    return dp[index][currentSum] = add + subtract;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    vector<unordered_map<int, int>> dp(n);
    int result = countWays(0, 0, nums, target, dp);
    cout << result << endl;
    return 0;
}
