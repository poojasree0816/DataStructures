#include <iostream>
#include <stack>
#include <string>
using namespace std;

int pre(char op){
    if(op=='+' || op=='-'){
        return 1;
    }
    else if(op=='/' || op=='*'){
        return 2;
    }
    else{
        return 3;
    }
}

int main()
{
    string s="x^y/(a*z)+b";
    string s1="";
    stack <char> arr;
    for(int i=0; i<s.length(); i++){

        if(isalnum(s[i])){

            s1=s1+s[i];
        }
        else if(arr.empty() && (s[i]=='^' || s[i]=='/' || s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='(')){

            arr.push(s[i]);
        }
        else if(s[i]==')'){

            while(!(arr.empty()) and arr.top()!='('){

                char c=arr.top();
                arr.pop();
                s1=s1+c;
            }
            arr.pop();
        }
        else{
            if(pre(s[i])>arr.top()){

                arr.push(s[i]);
            }
            else{

                while(!arr.empty() && arr.top()!='(' && (pre(s[i])<=pre(arr.top()))){
                    char c=arr.top();
                    arr.pop();
                    s1=s1+c;
                }
                arr.push(s[i]);
            }
        }

    }
    while(!arr.empty()){

        char c=arr.top();
        arr.pop();
        s1=s1+c;
    }
    cout<<"ans: "<<s1;


    return 0;
}
