#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,sum;
    cin>>n>>sum;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> dp(sum+1,0);
    dp[0]=1;
    for(int i=1;i<=sum;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>i){
                continue;
            }
            dp[i]=(dp[i]%mod+dp[i-arr[j]]%mod)%mod;
        }
    }
    cout<<dp[sum]%mod<<endl;
}