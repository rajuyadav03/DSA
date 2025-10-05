#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class solution {
    public:
    int subarraysum(vector<int>& nums,int K) {
        int currentsum = 0;
        int maxsum = INT_MIN;
       for(int i =0;i<nums.size();i++){
        currentsum += nums[i];
        maxsum = max(maxsum,currentsum);
        if(currentsum < 0){
            currentsum = 0;
        }

       }
         return maxsum;
        
    }
};
 int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int K = 0;
    solution obj;
    int result = obj.subarraysum(nums,K);
    cout << "Maximum subarray sum is: " << result << endl;
    return 0;
 }