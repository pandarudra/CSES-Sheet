#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string str;
		getline(cin,str);
		int cnt=0,tmp=0;
		bool ans=false;
		for(size_t i=0;i<str.length();i++){
			if(str[i]=='.'){
				cnt++;
				tmp++;
			}else if(str[i]=='#'){
				cnt=0;
				
			}
			if(cnt>=3){
				cnt=2;
				cout<<cnt<<"\n";
				ans=true;
				break;
			}
		}
		if(!ans){
			cout<<tmp<<"\n";
		}
	}
	return 0;
}