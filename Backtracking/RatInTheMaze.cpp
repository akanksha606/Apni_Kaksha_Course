/*Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
You can not move to the walls.
Idea: Try all the possible paths to see if you can reach (n-1,n-1)
Input:
0 denotes wall, 1 denotes free path
two numbers n, m
Next n lines contain m numbers (0 or 1)
Output:
Print 1 if rat can reach (n-1,m-1)
Print 0 if it can not reach (n-1,m-1)
Test Case 1:
Input:
5 5
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1

Output:
1
*/
#include<iostream>
#include<string>
using namespace std;
bool isSafe(int **ar,int x, int y, int n){
    if(x<n && y<n && ar[x][y]==0)
    return true;
    return false;
}

bool ratInMaze(int **ar, int x,int y, int n, int **solAr){
    if(x==n-1 || y==n-1){
        solAr[x][y]=1;
        return true;
    }
    if(isSafe(ar,x,y,n)){
        solAr[x][y]=1;
        if(ratInMaze(ar,x+1,y,n,solAr))
        return true;
        if(ratInMaze(ar,x,y+1,n,solAr))
        return true;

        solAr[x][y]=0;
        return false;
    }

}
int main(){
int n;
cin>>n;
int **ar=new int*[n];
for(int i=0;i<n;i++)
ar[i]=new int[n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    cin>>ar[i][j];
}
int **solAr=new int*[n];
for(int i=0;i<n;i++)
solAr[i]=new int[n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    solAr[i][j]=0;
}
if(ratInMaze(ar, 0,0,n,solAr)){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    cout<<solAr[i][j]<<" ";
    cout<<endl;
}
}

}
