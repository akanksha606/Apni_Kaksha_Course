/*Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],m=-1;
    for(int i=0;i<n;i++){
    cin>>a[i];
    m=max(a[i],m);
    }
    bool ar[m];
    for(int i=0;i<n;i++){
        if(a[i]>=0)
        ar[a[i]]=true;
    }
    for(int i=0;i<m;i++){
        if(ar[i]==false){
        cout<<i;
        break;
        }
    }
    return 0;
}