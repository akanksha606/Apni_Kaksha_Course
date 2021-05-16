/*Given a string of integers, our task is to form the biggest number out of those
numbers in the string.*/
#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=s.size()-1;i>=0;i--)
    cout<<s[i];
    return 0;
}