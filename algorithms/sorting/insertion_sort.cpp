#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
	int min,i,j;

	for (int i = 0;i < n;++i){
		j = i - 1;
		min = arr[i];
		
		while(j >= 0 && min < arr[j]){
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = min;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i = 0; i < n;++i){
		cin>>arr[i];
	}	

	insertion_sort(arr,n);

	for(int i = 0;i < n;++i){
		cout<<arr[i]<<" ";
	}
}
