#include<iostream>
#include<string>
using namespace std;

void subSec(string s,string ans ){
    if(s.length()==0){
    cout<<ans<<endl;
    return;
    }

    char ch=s[0];

    string ros=s.substr(1);
     
     subSec(ros,ans);
     subSec(ros,ans+ch);


}
int main(){
    subSec("abc", "");
    return 0;

}