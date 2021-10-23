#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
	int x = *a;
	*a = *b;
	*b = x;
}

void selection_sort(int arr[],int n){
	int i,j,min;

	for (int i = 0;i < n - 1;++i){
		min = i;
		for (int j = i + 1;j < n;++j){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap (&arr[min],&arr[i]);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i = 0;i < n;++i){
		cin>>arr[i];
	}

	selection_sort(arr,n);

	for(int i = 0;i < n;++i){
		cout<<arr[i]<<" ";
	}
}
