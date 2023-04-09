#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int a,b;
        cin>>a>>b;
        int c=0,s=0;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
        c=a/b;
        s=(c+1)*b;
        cout<<s-a<<endl;

    }
return 0;
}
