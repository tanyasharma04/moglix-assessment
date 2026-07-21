#include <iostream>
#include <stack>
#include <string>
using namespace std;

int longestValidParentheses(string s){
    stack<int> st;
    st.push(-1);
    int ans = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if (st.empty()){
                st.push(i);
            }
            else{
                int len = i - st.top();
                if (len > ans){
                    ans = len;
                }     
            }
        }
    }
    return ans;
}
int main(){
    string s;
    cin >> s;
    cout << longestValidParentheses(s);
    return 0;
}