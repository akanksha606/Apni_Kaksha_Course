#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

int unique(int a[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    return xorsum;
}
int main(){
    int a[]={2,3,4,5,2,4,3};
    cout<<unique(a,7);
    return 0;

}