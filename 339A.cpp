#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[1001];
    string s;
    cin>>s;
    int c=0;
    int i;
   for(i=0;i<s.size();i++){
    if(s[i]=='+'){
        continue;
    }
    else{
        a[c++]=s[i]-'0';
    }
   }
   sort(a,a+c);
   for(i=0;i<c;i++){
    cout<<a[i];
    if(i==c-1){
        break;
    }
    cout<<"+";
   }
return 0;
}
