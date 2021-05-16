#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

int getBit(int n, int p){
    return((n&(1<<p))!=0);
}

int setBit(int n,int p){
    return(n|(1<<p));
}
int clearBit(int n,int p){
    int mask=~(1<<p);
    return n&mask;
}

int updateBit(int n,int p, int v){
    int mask=~(1<<p);
    n=n&mask;
    return (n|(v<<p));
}
int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}
