#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
bool paren(string s)
{
    stack<char> st;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        st.push(s[i]);
        else if(s[i]==')'){
            if(!st.empty() && st.top()!='(')
            return false;
            else
            st.pop();
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()!='{')
            return false;
            else
            st.pop();
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()!='[')
            return false;
            else
            st.pop();
        }
        }
    if(!st.empty())
    return false;
    else
    return true;
}
int main(){

    string s;
    cin>>s;
    if(paren(s))
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}