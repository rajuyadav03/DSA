#include <iostream>
#include <vector>
#include <string>
using namespace std;

class soiution{
    public:
    bool isanagram(string s, string t){
        if(s.size() != t.size()) return false;
        vector<int> count(26,0);
        for(int i = 0; i < s.size(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int c : count){
            if(c != 0) return false;
        }
        return true;
    }
};
int main(){
    soiution sol;
    string s = "anagram";
    string t = "nagaram";
    if(sol.isanagram(s,t)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    return 0;
}