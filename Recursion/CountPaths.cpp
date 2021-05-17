/*CountPaths
Find the number of ways to reach e from s.
Idea:
We have 6 ways to go forward (1,2,3,4,5,6).
At the starting point s,
Current answer = countPath(s+1,e) + countPath(s+2,e) + countPath(s+3,e) +
countPath(s+4,e) + countPath(s+5,e) + countPath(s+6,e)*/
#include<iostream>
#include<string>
using namespace std;
int countPath(int s,int e){
    if(s==e)
    return 1;
    if(s>e)
    return 0;
    int count=0;
    for(int i=1;i<=6;i++){//range of dice
    count+=countPath(s+i,e);
    }
    return count;
}
int main(){
cout<<countPath(0,3);
return 0;
}