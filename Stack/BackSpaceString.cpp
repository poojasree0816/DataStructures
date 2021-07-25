#include <stack>
#include <string>
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> stack1;
        stack<int> stack2;
        string hash="#";
        for(int i=0; i<s.length();i++){
            char temp=s[i];
            int ascii=(int)temp;
            if(s[i]==hash[0]){
                if(!stack1.empty()){
                    stack1.pop();    
                }  
            }
            else{
                stack1.push(ascii);
            }
        }
        for(int i=0; i<t.length();i++){
            char temp=t[i];
            int ascii=(int)temp;
            if(t[i]==hash[0]){
                if(!stack2.empty()){
                    stack2.pop();    
                }  
            }
            else{
                stack2.push(ascii);
            }
        }
        return stack1==stack2;
    }
};
