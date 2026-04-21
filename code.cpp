#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
void solve(){
    int n;
    cin>>n;
    int v[]={1,2,4,7,8,11,13,14};
    cout<<(v[(n-1)%8])+(15*(n-1)/8)<<endl;
}
signed main() {
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    if (testcases)cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
}