#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      vector<ll> a(n);
      for(auto &it:a){
         cin>>it;
      }
      if(a[0]==1){
         cout<<"YES";
      }else{
         cout<<"NO";
      }
      cout<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
        
      