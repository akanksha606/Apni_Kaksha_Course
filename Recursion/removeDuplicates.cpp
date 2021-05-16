#include<iostream>
#include<string>
using namespace std;
string removeDup(string s){

    if(s.size()==0)
    return s;

    char c=s[0];
    string ans= removeDup(s.substr(1));
    if(c==ans[0])
    return ans;

    return c+ans;
    
}
int main(){
    string s="pippxxppiixipi";
    cout<<removeDup(s);
}