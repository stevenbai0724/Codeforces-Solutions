#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;cin>>n;
    int count = 0;
    int negcount = 0;

    bool zero = false;
    for(int i =1;i<=n;i++){
        int x; cin>>x;

        if(x>=1) count+=(x-1);
        else if(x<=-1){
            count+=(-1-x);
            negcount++;
        }
        else{
            zero = true;
            count++;
        }

    }
    if(zero)cout<<count;
    else if(negcount%2==0)cout<<count;
    else if(negcount%2==1)cout<<count+2;
    




    return 0;
}