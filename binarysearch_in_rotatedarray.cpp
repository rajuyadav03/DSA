#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int ans = nums[0];
        int right = nums.size()-1;
        
        if (nums.size() == 1){
            return nums[0];
        }
        while(left <= right){
        if (nums[left] <= nums[right]){
        ans = min(ans ,nums[left]); 
        }

        int mid =(left + right )/2;
        ans = min(ans , nums[mid]);
       
        if (nums[left]<= nums[mid]){
            left = mid +1;
        }else {
            right = mid-1;
        }
        
        }
return ans ;
        }
    
};
int main() {
    vector<int> nums = {3,4,5,1,2};
    Solution obj;
    int result = obj.findMin(nums);
    cout << "Minimum element in the rotated sorted array is: " << result << endl;
    return 0;
}