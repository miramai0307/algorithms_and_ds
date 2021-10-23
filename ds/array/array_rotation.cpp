#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll const max_val = 1e8;
ll arr[max_val];
ll n;

void process(){
	ll len = n - 1;
	ll mid = len/2;
	for(int i = 0;i <= mid;++i){
		swap(arr[len - i],arr[i]);
	}
}


int main(){
	cin>>n;
	for(ll i = 0;i < n;++i) cin>>arr[i];
	process();
	for(ll i = 0;i < n;++i) cout<<arr[i]<<" ";
}
