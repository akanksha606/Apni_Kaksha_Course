/*To print all the permutations of a string.
Idea: for each character s[i] in the given string, we add a character in the ans
string and then solve solve s.substr(0,i) + s.substr(i+1)*/
#include<iostream>
#include<string>
using namespace std;
void permutate(string s,string ans){
    if(s.length()==0){
    cout<<ans<<endl;
    return;
    }

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutate(ros,ans+ch);
    }
}
int main(){
permutate("abc","");
return 0;
}