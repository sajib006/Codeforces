#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string x;
    x=s1+s2;
    sort(x.begin(),x.end());
    sort(s3.begin(),s3.end());
    if(x==s3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
