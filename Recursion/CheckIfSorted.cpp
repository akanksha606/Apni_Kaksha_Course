//Check if the array is in strictly increasing order or not.
#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
bool check_sorted(int a[],int n){
    if(n==1)
    return true;
    bool restarray=check_sorted(a+1,n-1);
    if(a[0]<a[1] && restarray)
    return true;
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    cout<<check_sorted(a,7);
    return 0;
}