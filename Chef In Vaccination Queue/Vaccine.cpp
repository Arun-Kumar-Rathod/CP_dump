#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int N,P,X,Y;
        cin>>N>>P>>X>>Y;
        int a[N],res=0;
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        for(int i=0;i<P;){
            if(a[i]==1){
                res+=Y;
            }
            if(a[i]==0){
                res+=X;
            }
            i++;
        }
        cout<<res<<endl;
        //use endl in place of \n to flush the buffer. 
    }
    return 0;
}
