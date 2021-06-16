#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prec(char c){
    if(c=='^')
    return 3;
    else if(c=='/'||c=='*')
    return 2;
    else if(c=='+'||c=='-')
    return 1;
    else 
    return -1;     // is case of brackets this will be returned
}

string infixToPostfix(string s){
    stack<char> st;
    string r;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) //for operand
        r+=s[i];

        else if(s[i]=='(') //if openning bracket found
        st.push(s[i]);

        else if(s[i]==')'){ // if closing bracket then pop until opening bracket
            while(!st.empty() && st.top()!='('){
                r+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){ //if an operator
                r+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        r+=st.top();
        st.pop();
    }
    return r;
}
int main(){
    cout<<infixToPostfix("(a-b/c)*(a/k-l)");
    return 0;
}