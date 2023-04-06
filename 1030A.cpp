#include<iostream>
using namespace std;
int main(){
    int n,x,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            c++;
        }
    }
    if(c==n){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
return 0;
}
