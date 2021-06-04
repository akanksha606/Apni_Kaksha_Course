/*Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
*/
#include<iostream>
#include<stack>
using namespace std;
void reverse(string s){
    stack <string> st;
    
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' &&i<s.length()){
        word+=s[i];
        i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    
    string s="Hey, How are you doing?";
    reverse(s);
    return 0;
}