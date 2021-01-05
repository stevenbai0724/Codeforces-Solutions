//https://codeforces.com/contest/1471/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin>>t;
    while(t--){
        double n, x;
        cin>>n>>x;
        int sum = 0;
        int hi = 0;

        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=1;i<=n;i++){
            double num = arr[i];
            hi += ceil(num/x);
        }
        cout<<ceil(sum/x)<<" "<<hi<<"\n";

    }

    return 0;
}