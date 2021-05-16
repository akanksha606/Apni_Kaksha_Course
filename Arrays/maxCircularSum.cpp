//find circular maximum sum possible of a subarray 
#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n){

int currs=0,maxs=INT_MIN;
    for(int i=0;i<n;i++){ //kandanes algo
        currs+=a[i];
        if(currs<0)
        currs=0;
        maxs=max(maxs,currs);
    }
    return maxs;
}

int main(){ 
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
     
     int nonwrapSum=kadane(a,n);
     int totals=0;

    for(int i=0;i<n;i++){
        totals+=a[i];
    a[i]=-a[i];
    }
    int wrap=totals+kadane(a,n);
    cout<<max(wrap,nonwrapSum);
    
    return 0;
}