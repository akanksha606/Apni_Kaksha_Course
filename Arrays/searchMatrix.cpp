/*Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000

Sample Test Case:
Consider the following matrix:
[
[1, 4, 7, 11, 15],
[2, 5, 8, 12, 19],
[3, 6, 9, 16, 22],
[10, 13, 14, 17, 24],
[18, 21, 23, 26, 30]
]
Given target = 5, return true.

Given target = 20, return false.*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n,i,j;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++)
     for( j=0;j<n;j++)
     cin>>a[i][j];
     int target;
     cin>>target;
        bool f=false;
     int r=0, c=n-1;
        while(r<m && c>=0){
            if(a[r][c]==target)
                f=true;
            if(a[r][c]>target)
                c--;
            else
                r++;
        }
        if(f)
        cout<<"true";
        else
        cout<<"false";
        return 0;
}
