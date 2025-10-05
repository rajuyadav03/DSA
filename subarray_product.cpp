#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int subarrayProduct(vector<int>& nums) {
        int minproduct = nums[0];
        int maxproduct = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int currentproduct = nums[i];

            int tempMax = maxproduct;
            int tempMin = minproduct;

            maxproduct = max({currentproduct, tempMax * currentproduct, tempMin * currentproduct});
            minproduct = min({currentproduct, tempMax * currentproduct, tempMin * currentproduct});

            result = max(result, maxproduct);
        }

        return result;
    }
};

int main() {
    vector<int> nums = {2, 3, -2, 4};
    Solution obj;
    int result = obj.subarrayProduct(nums);
    cout << "Maximum subarray product is: " << result << endl;
    return 0;
}
