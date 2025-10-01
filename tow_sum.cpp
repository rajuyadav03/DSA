#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; // value -> index
        for (int i = 0; i < (int)nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = mp.find(complement);
            if (it != mp.end()) return {it->second, i};
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,7,11,15,5}; 
    int target = 9;
    auto ans = sol.twoSum(nums, target);
    if (ans.size() == 2) {
        cout << ans[0] << " " << ans[1] << "\n"; // prints indices (0-based)
    } else {
        cout << "No pair found\n";
    }
    return 0;
}
