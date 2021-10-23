#include <bits/stdc++.h>
using namespace std;

#define ll long long

//Find sum of numbers from l to r in an array

ll const maxn = 1e8;
ll arr[maxn];
ll sum[maxn];
ll n,l,r;

void cal_sum(){
	sum[0] = arr[0];
	for(ll i = 1;i < n;++i){
		sum[i] = sum[i - 1] + arr[i];
	}
}

void solve(){
	if(l == 0){
		cout<<sum[r]<<"\n";
	}else if(left > 0){
		cout<<sum[r] - sum[l - 1]<<"\n";
	}
}

int main(){
	cin>>n>>l>>r;
	--l; --r;
	for(ll i = 0;i < n;++i) cin>>arr[i];
	
	cal_sum();
	solve();
}
