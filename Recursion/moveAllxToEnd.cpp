#include<iostream>
#include<string>
using namespace std;
string movex(string s){

    if(s.size()==0)
    return s;
    char c=s[0];
    string ans=movex(s.substr(1));
    if(c=='x')
    return ans+c;
    else
    return c+ans;
}
int main(){
    string s="pippxxppiixipi";
    cout<<movex(s);
}