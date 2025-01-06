#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
	string s;
	cin>>s;
	char c = 'A';
	ll ans = 1;
	ll cnt = 0;
	for(char a : s){
		if(a == c){
			++cnt;
			ans = max(ans, cnt);
		}
		else{
			c = a;
			cnt = 1;
		}
	}
	cout<<ans<<endl;
}