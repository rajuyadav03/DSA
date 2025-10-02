#include<iostream>
#include <vector>
using namespace std;

class slution {
    public:
    double mypow(double x,int n){
        long binf = n;
        if (n < 0){
            x = 1/x;
            binf = -binf;
        }
        double ans = 1.0;
        while (binf > 0){
            if (binf % 2 == 1){
                ans = ans * x;
            }
            x = x * x;
            binf = binf / 2;
        }
    

        return ans;
    } 

};
int main(){
    slution sol;
    double x = 2.00000;
    int n = 2;
    cout<<sol.mypow(x,n)<<endl;
    return 0;
}