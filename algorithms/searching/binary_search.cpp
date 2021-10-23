#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int l, int r, int x){
	if(r >= l){
		//Find the mid point
		int mid = l + (r - l)/2;
		
		if(arr[mid] == x){
			return mid;
		}

		if(arr[mid] > x){
			return binary_search(arr,l,mid - 1,x);
		}
			
		return binary_search(arr,mid + 1,r,x);
	}

	return -1;
}

int main(){
	int n,x;
	cin>>n>>x;
	int arr[n];

	for(int i = 0;i < n;++i){
		cin>>arr[i];
	}

	std::sort(arr,arr + n);
	
	for(int i = 0;i < n;++i){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n"<<"Index in sorted array: "<<binary_search(arr,0,n,x);
}
