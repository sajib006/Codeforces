#include<iostream>
using namespace std;
int main(){
    int n,h,x,s=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>x;
        if(h<x){
            s=s+2;
        }
        else{
            s=s+1;
        }
    }
    cout<<s<<endl;
return 0;
}
