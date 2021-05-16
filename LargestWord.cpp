//Largest word in a sentence
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; //no. of words in sentence
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int st=0,max_st=0;
    int cur_len=0, max_len=INT_MIN;
    while (1){

        if(a[i]==' '||a[i]=='\0')
        {
            if(cur_len>max_len){
            max_len=cur_len;
            max_st=st;
            }
            st=i+1;
            cur_len=0;
        }
        else
        cur_len++;
if(a[i]=='\0')
    break;

    i++;
    }
    cout<<max_len<<endl;
    for(int i=0;i<max_len;i++)
    cout<<a[i+max_st];
    return 0;
}