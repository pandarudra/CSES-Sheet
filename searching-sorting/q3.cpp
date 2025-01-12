#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define umap unordered_map
#define uset unordered_set
#define mset multiset


typedef long long ll;


void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> P(n);
    for(auto &it:P){
        cin>>it;
    }
    sort(P.begin(),P.end());

    ll cnt=0LL;

    ll left=0LL,right=n-1LL;
    while(left<=right){

        while(left<right && P[left]+P[right]>x){
            cnt++;
            right--;
        }

        if(right<left)break;
        cnt++;
        left++;
        right--;
    }
    cout<<cnt<<"\n";
}

int main(){
    fastio;
    solve();
    return 0;
}
        
        