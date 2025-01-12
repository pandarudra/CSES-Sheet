#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(n+1);
		v[0]=0;
		int ans=0;
		for(int i=1;i<=n;i++){
			cin>>v[i];
			ans=max(ans,v[i]-v[i-1]);
		}
		ans=max(ans,2*(k-v[n]));
		cout<<ans<<endl;
		

		
		
	}
	return 0;
}