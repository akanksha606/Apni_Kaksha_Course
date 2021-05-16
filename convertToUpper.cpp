/*Given a string s with both uppercase and lowercase latin characters (‘a’ - ‘z’). Your
task is convert whole string into
1. Lower Case
2. Upper Case*/

#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="fdfdFDyjGOm";
    //upper case
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z')
        s[i]=s[i]-32;
    }
    cout<<s<<endl;

    //lower case
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z')
        s[i]=s[i]+32;
    }
    cout<<s<<endl;

    //with function
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s;
    return 0;
}