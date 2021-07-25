#include <vector>
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        vector<int> beginning;
        
        for(int i=1; i<=n; i++){
            beginning.push_back(i);
        }
        int j=0;
        for(int i=0; i<n; i++){
            if(j<target.size()){
                if(beginning[i]==target[j]){
                    res.push_back("Push");
                    j++;
                }
                else{
                    res.push_back("Push");
                    res.push_back("Pop");
                }
            }
            
        }
        return res;
    }
};
