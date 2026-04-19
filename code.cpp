#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=1;
const int MOD=1e9+7;
int pwr(int a,int b) {
    int ans=1;
    while (b--)ans=(ans*a)%MOD;
    return ans;
}
int len[20];
int pref(int n) {
    string s=to_string(n);
    int dp[20][2][2];
    memset(dp,0,sizeof(dp));
    dp[0][1][0]=1;
    for (int i=0;i<(s.size() + 1)/2;i++) {
        int num=s[i]-'0';
        int numr=s[s.size()-i-1]-'0';
        for (int j=0;j<2;j++) {
            for (int m=0;m<2;m++) {
                for (int d=(i==0);d<=9;d++) {
                    if ((j and d>num)) {
                        continue;
                    }
                    int nj,nm;
                    nj=j&(d==num);
                    if (m) {
                        if (nj and d>=numr)nm=1;
                        else nm=0;
                    }
                    else {
                        if (nj and d>numr)nm=1;
                        else nm=0;
                    }
                    dp[i+1][nj][nm]+=dp[i][j][m];
                }
            }
        }
    }
    return dp[(s.size() + 1)/2][1][0]+dp[(s.size() + 1)/2][0][0];
}
void solve(){

}
signed main() {
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i=1,x=9;i<18;i++,x=(x*10+9)) {
        len[i]=len[i-1]+pref(x);
    }
    //cout<<pref(9)<<endl;

    int t=1;
    if (testcases)cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<": ";
        solve();
    }
}