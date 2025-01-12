#include<bits/stdc++.h>
using namespace std;

bool box(vector<int> &v,int n,int k){
	if(is_sorted(v.begin(),v.end())){
		return true;
	}
	if(n>=2 && k<2){
		return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		if(box(v,n,k)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

		
		
	}
	return 0;
}