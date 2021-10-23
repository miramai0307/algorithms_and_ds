#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int const left,int const mid,int const right){
	auto const sub_one = mid - left + 1;
	auto const sub_two = right - mid;
	
	//Temp arrays
	auto *left_arr = new int[sub_one];
	auto *right_arr = new int[sub_two];

	//Copy data from main to temp array
	for (auto i = 0;i < sub_one;++i){
		left_arr[i] = arr[left + i];
	}
	
	for(auto j = 0; j < sub_two;++j){
		right_arr[j] = arr[mid + 1 + j];
	}

	//Init index
	auto index_one = 0;
	auto index_two = 0;
	int  merged_ = left;

	//Merge data from temp back to main
	while(index_one < sub_one && index_two < sub_two){
		if(right_arr[index_two] >= left_arr[index_one]){
			arr[merged_] = left_arr[index_one];
			index_one++;
		}else{
			arr[merged_] = right_arr[index_two];
			index_two++;
		}
		++merged_;
	}
	
	//Copy the left one to main
	while(index_one < sub_one){
		arr[merged_] = left_arr[index_one];
		merged_++;
		index_one++;
	}

	while(index_two < sub_two){
		arr[merged_] = right_arr[index_two];
		merged_++;
		index_two++;
	}
}

void merge_sort(int arr[],int begin, int end){
	if(begin >= end){ 
		return;
	}

	auto mid = begin + (end - begin)/2;
	
	merge_sort(arr,begin,mid);
	merge_sort(arr,mid + 1,end);
	merge(arr,begin,mid,end);
}

int main(){
	int n;cin>>n;
	int arr[n];

	for(int i = 0; i < n;++i){
		cin>>arr[i];		
	}

	merge_sort(arr,0,n);
	
	for(int i = 0;i < n;++i){
		cout<<arr[i]<<" ";
	}
}
