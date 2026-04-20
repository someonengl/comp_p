#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
void solve(){
    int d,k,t;
    cin>>k>>d>>t;
    t=4*t;
    d*=2;
    k*=2;
    d=((k+d-1)/d)*d;
    int l=0,r=4e18,mid,ans=-1;
    while (l<=r) {
        mid=(l+r)/2;
        int num=mid; 
        num=(mid/d)*(2*k+(d-k));
        int rem=mid%d;
        if (rem>k)rem=(2*(k)+(rem-k));
        else rem=2*rem;
        num+=rem;
        if (num>=t) {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    //cout<<ans<<endl;
    double anss=ans;
    anss/=2;
    cout.precision(1);
    cout<<fixed<<anss<<endl;
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