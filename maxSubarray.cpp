//find maximum sum possible of a subarray
#include<iostream>
#include<climits>
using namespace std;
int main(){ //kandanes algo
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int currs=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currs=currs+a[i];
        if(currs<0)
        currs=0;
        if(currs>maxSum)
        maxSum=currs;
    }
    cout<<maxSum;

}