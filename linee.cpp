#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int value){
	for (int i= 0; i<size; i++){
		if (arr[i]==value){
			return i;
		}else if (value<arr[i]){
			break;
		}
	}
	return -1;
}

int main(){
//	int arr[] = {3,5,7,2,6,9};
	int arr[] = {2,3,5,6,7,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int search;
	cout<<"enter the search value";
	cin>>search;
	int result = linear_search(arr, size, search);
	if (result != -1){
		cout<<"the element is found at index "<<result<<endl;
	}else{
		cout<<"Element not found";
	}
}
