#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
int v[100000+1];
int n;
int calc(int st) {
    int ls=0,sum=0;
    int ans=0;
    for (int i=1;i<=st;i++)sum+=v[i];
    ans=1;
    ls=sum;
    sum=0;
    for (int i=st+1;i<=n;i++) {
        sum+=v[i];
        if (sum>=ls) {
            ls=sum;
            sum=0;
            ans++;
        }
    }
    return ans;
}
void solve(){
    cin>>n;
    int ans=0;
    for (int i=1;i<=n;i++)cin>>v[i];
    for (int i=1;i<=n;i++) {
        ans=max(ans,calc(i));
    }
    cout<<ans<<endl;
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