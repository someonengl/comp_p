#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=1;
int a,b;
int calc(vector<vector<char>>& v) { // c1 red c2 blue
    int A=0,B=0;
    for (int i=0;i<v.size();i++) {
        int c1=0,c2=0;
        for (int u=0;u<v[i].size();u++) {
            if (v[i][u]=='+')c1++;
            else c2++;
        }
        if (c2>c1)B++;
    }
    for (int u=0;u<b;u++) {
        int c1=0,c2=0;
        for (int i=0;i<a;i++) {
            if (v[i][u]=='+')c1++;
            else c2++;
        }
        if (c1>c2)A++;
    }
    return A+B;
}
void solve(){
    cin>>a>>b;
    int n=a*b;
    int mx=-1;
    vector<vector<char>> ans;
    for (int mask=0;mask<(1<<n);mask++) {
        vector<vector<char>> temp(a,vector<char>(b));
        for (int i=0;i<n;i++) {
            temp[i/b][i%b]=(mask>>i)&1?'+':'-';
        }
        int tempmx=calc(temp);
        if (tempmx>mx) {
            mx=tempmx;
            ans=temp;
        }
    }
    cout<<mx<<endl;
    for (auto v:ans) {
        for (char c:v) {
            cout<<c;
        }
        cout<<endl;
    }
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