//print spiral matrix
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

    //spiral print
    int row_start=0, row_end=m-1, col_start=0, col_end=n-1;

    while(row_start<=row_end && col_start<=col_end){
        //start row
        if (row_start <= row_end && col_start <= col_end)
        for(i=col_start; i<=col_end;i++)
        cout<<a[row_start][i]<<" ";
        row_start++;

        //column end
        if (row_start <= row_end && col_start <= col_end)
        for(i=row_start; i<=row_end; i++)
            cout<<a[i][col_end]<<" ";
        col_end--;

        //row end
        if (row_start <= row_end && col_start <= col_end)
        for(i=col_end; i>=col_start; i--)
        cout<<a[row_end][i]<<" ";
        row_end--;

        //column start
        if (row_start <= row_end && col_start <= col_end)
        for(i=row_end; i>=row_start; i--)
        cout<<a[i][col_start]<<" ";
        col_start++;


}
return 0;
}