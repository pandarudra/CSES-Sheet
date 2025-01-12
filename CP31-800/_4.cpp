#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      if((n+1)%3==0 || (n-1)%3==0){
         cout<<"First";
      }else{
         cout<<"Second";
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
        
      