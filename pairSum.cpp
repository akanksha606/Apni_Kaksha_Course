//Find whether there exist 2 numbers that sum to K.
#include<iostream>
#include<climits>
using namespace std;
int main(){ 
    int n,s;
    cin>>n>>s;
    int a[n];
    
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int f=0;
    int low=0;
    int high=n-1;
    while(low<high){
        if(a[low]+a[high]==s){
            f=1;
            break;
        }
        else if(a[low]+a[high]<s)
        low+=1;
        else
        high-=1;

    }
    if(f)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}