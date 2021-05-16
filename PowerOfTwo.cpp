#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n&&!(n&(n-1)))
    cout<<"yes";
    else
    cout<<"no";

    return 0;

}