#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int search_item){
	for(int i =0; i<size; i++){
		if (arr[i]==search_item){
			return i;
		}else if (arr[i]>search_item){
			break;
		}
		
	}
	return -1;
	
}

int main(){
	int search_item;
//	int arr[]={2,6,1,9,8,7,5};
	int arr[] = {1,2,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"enter search item ---->  ";
	cin>>search_item;
	
	int result = linear_search(arr, size, search_item);
	
	if (result != -1){
		cout<<"the item is found at index "<<result<<endl;
	}else {
		cout<<"Item not found";
	}
}
