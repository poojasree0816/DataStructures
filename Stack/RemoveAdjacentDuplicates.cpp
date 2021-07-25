class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        stack<int> stack1;
        for(int i=0; i<s.length(); i++){
            int ascii=(int)s[i];
            if(stack1.empty()){
                stack1.push(ascii);
            }
            else{
                int temp=stack1.top();
                if(temp==(int)s[i]){
                    stack1.pop();
                }
                else{
                    stack1.push(ascii);
                }
            }
        }
        while(!stack1.empty()){
            int temp1=stack1.top();
            stack1.pop();
            char temp=(char)temp1;
            res=res+temp;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
