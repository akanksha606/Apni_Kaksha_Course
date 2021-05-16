#include<iostream>
#include<string>
using namespace std;
void replacePi(string s){
    if(s.length()==0)
    return;

    if(s[0]=='p'&&s[1]=='i'){
    cout<<3.41;
    string ros=s.substr(2);//rest of the string
    replacePi(ros);
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
int main(){
    string s="pippxxppiixipi";
    replacePi(s);
}