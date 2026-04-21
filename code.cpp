#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
vector<int> f(1e6+10);
vector<int> inv(1e6+10);
int bp(int a,int b,int mod){
    int res=1;
    if(b==0)return res;
    if(b==-1)return inv[a];
    a%=mod;
    while(b>0){
        if(b%2!=0)res*=a,res%=mod;
        a*=a,a%=mod;
        b/=2;
    }
    return res;
}
void build(){
    f[0]=1;
    inv[0]=1;
    for(int i=1;i<=1e6;i++){
        f[i]=(f[i-1]*i)%MOD;
        inv[i]=bp(f[i],MOD-2,MOD);
    }
}
int C(int n,int m){
    return (f[n]*inv[m]%MOD*inv[n-m]%MOD);
}
void solve(){
    int n;
    cin>>n;
    int ans=0;
    for (int mask=0;mask<(1<<n);mask++) {
        if (__builtin_popcount(mask)!=n/2) {
            continue;
        }
        int sum1=0,sum2=0;
        for (int i=0;i<n;i++) {
            if ((mask>>i)&1) {
                sum1+=i+1;
            }
            else sum2+=i+1;
        }
        if (abs(sum1-sum2)%11==0)ans+=(f[n/2]*f[n-n/2])%MOD;
    }
    cout<<ans<<endl;
}
signed main() {
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    build();
    int t=1;
    if (testcases)cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
}