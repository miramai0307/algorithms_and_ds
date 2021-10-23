#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int l,int h,int x){
	if(h >= l && x >= arr[l] && x <= arr[h]){
		int pos = l + ((x - arr[l])*(h- l)/(arr[h] - arr[l]));
		
		if (arr[pos] == x){
			return pos;
		}
		
		if(arr[pos] > x){
			return search(arr,l,pos - 1,x);
		}

		if(arr[pos] < x){
			return search(arr,pos + 1,h,x);
		}
	}
	return -1;
}

int main(){
	int n,x;cin>>n>>x;
	int arr[n];

	for(int i = 0;i < n;i++){
		cin>>arr[i];
	}

	std::sort(arr,arr+n);
	
	cout<<"Sorted array: ";
	for(int i = 0;i < n;++i){
		cout<<arr[i]<<" ";
	}

	cout<<"\n"<<"Index: "<<search(arr,0,n - 1,x);

}
