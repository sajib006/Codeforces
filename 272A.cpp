#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,t(0),a(0);
    for(int i=0;i<n;i++){
        cin>>x;
        t+=x;
    }
    for(int i=1;i<=5;i++){
        if((t+i)%(n+1)!=1){
            a+=1;
        }
    }
    cout<<a<<endl;
return 0;
}
