#include <iostream>
#include <vector>   
#include <climits>
using namespace std;
 class solution{
    public:
    int subarrayproduct(vector<int>& nums){
        int minproduct = nums[0];
        int maxproduct = nums[0];
        int result = maxproduct;
    
        for (int i = 1; i< nums.size();i++){
            int currentproduct = nums[i];
            int temp = max(currentproduct,max(maxproduct*currentproduct,minproduct*currentproduct));
            minproduct = min(currentproduct,min(minproduct*currentproduct,maxproduct*currentproduct));
            maxproduct = temp;
            result = max(result,maxproduct);
           
    
        } 
    
        return result;
    }

 };
 int main(){
    vector<int> nums = {2,3,-2,4};
    solution obj;
    int result = obj.subarrayproduct(nums);
    cout << "Maximum subarray product is: " << result << endl;
    return 0;
 }