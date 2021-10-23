#include <bits/stdc++.h>
using namespace std;
#define ll long long

//check frequency of each element in an array

ll const maxn = 1e6;

ll arr[maxn]; 
ll r[maxn];
ll n,q;

void solve(){
	for(ll i = 0;i < n;++i)r[arr[i]]++;
	cout<<r[q];
}

int main(){
	cin>>n>>q;
	for(ll i = 0;i < n ;++i)cin>>arr[i];
	solve();
}

