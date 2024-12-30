#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define umap unordered_map
#define uset unordered_set
#define mset multiset


typedef long long ll;


void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(n),b(m);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=0;i<m;i++){
        cin>>b[i];
    }

    ll cnt=0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll i=0,j=0;
    while(i<n && j<m){
        ll lb=a[i]-k;
        ll ub=a[i]+k;

        if(b[j]>=lb && b[j]<=ub){
            cnt++;
            i++;
            j++;
        }else if(b[j]<lb){
            j++;
        }else{
            i++;
        }

    }
    cout<<cnt<<"\n";
}

int main(){
    fastio;
    solve();
    return 0;
}
        
        