#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn=min(a,b);
    int mx=max(a,b);
    int t=0;
    while(mn<mx)
    {
        mn+=c;
        mx-=c;
        t++;
    }
    cout<<t<<endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}
