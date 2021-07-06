#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j>i){
                continue;
            }
            dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
        }
    }
    cout<<dp[n]%mod<<endl;
}