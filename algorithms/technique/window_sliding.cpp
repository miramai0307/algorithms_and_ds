#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll const max_val = 1e8;

//Find max sum of subarray of k

ll arr[max_val];
ll n,k;

void solve(){
	ll max_sum = 0;
	for(ll i = 0;i < k;++i) max_sum += arr[i];
	
	ll window = max_sum;
	for(int i = k;i < n;++i){
		window += arr[i] - arr[i - k];
		max_sum = max(max_sum,window);
	}

	cout<<max_sum;
}

int main(){
	//Fast
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	cin>>n>>k;
	for(ll i = 0;i < n;++i) cin>>arr[i];
	solve();
}
