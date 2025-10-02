#include <iostream>
#include <vector>
using namespace std;
class solution {
    public:
    int maxprofit(vector<int>& price ){
        int maxprofit = 0, bestbuy = price[0];
        for (int i=1; i< (int)price.size();i++){
            if (price[i] > bestbuy){
                maxprofit = max(maxprofit, price[i] - bestbuy);
            } else {
                bestbuy = min(bestbuy, price[i]);
            } 
            }
            return maxprofit;
        }
    };
int main(){
    solution sol;   
    vector<int> price = {7,1,5,3,6,4};
    cout<<sol.maxprofit(price)<<endl;   
    return 0;
}
