#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int fisrst_occ(int a[],int n,int i, int key){
    if(i==n)
    return -1;

    if(a[i]==key)
    return i;

    return fisrst_occ(a,n,i+1,key);
}

int last_occ(int a[],int n,int i,int key){
    if(i==n)
    return -1;
    int restArray=last_occ(a,n,i+1,key);

    if(restArray!=-1)
    return restArray;

   
    if(a[i]==key)
    return i;
    return -1;

    
}
int main(){
    int a[]={1,2,3,2,5,2,7};
    cout<<last_occ(a,7,0,2);
    return 0;
}