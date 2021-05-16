#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,c(0),pcd(0),ccd(0),m(0);
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        pcd=abs(a[1]-a[0]);
        c=2;
        for(i=1;i<n-1;i++){
            ccd=abs(a[i]-a[i+1]);
            if(ccd==pcd){
            c++;
            }
            else{
                m=max(m,c);
            c=2;
            pcd=ccd;
            }
            
        }
        cout<<m<<endl;
    }


}