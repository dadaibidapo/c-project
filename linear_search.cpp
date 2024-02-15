#include<iostream>

using namespace std;

//int linear_search(int arr[], int size, int value){
//	for (int i=0; i<size; i++){
//		if (arr[i] == value){
//			return i;
//		}
//	}
//	return -1;
//}
//int linear_search(int arr[], int size, int value){
//	for (int i=0; i<size; i++){
//		if (arr[i]==value){
//			return i;
//		} else if(arr[i] > value){
//			break;
//		}
//	}
//	return -1;
//}

//int binary_search(int arr[], int size, int search_val){
//	int start = 0;
//	int end = size-1;
//	for (int i=0; i<size; i++){
//		int midpoint = (start + end)/2;
//		if (arr[midpoint]==search_val){
//			return midpoint;
//		}else if (arr[midpoint]<search_val){
//			start = midpoint +1;
//		}else if(arr[midpoint]>search_val){
//			end = midpoint -1;
//		}
//	}
//	return -1;
//}
int tenary_search(int arr[], int size, int search_val){
	int start =0;
	int end = size;
	for (int i = 0; i<size; i++){
		int mid1 = start + ((end-start)/3);
		int mid2 = end - ((end-start)/3);
		if (arr[mid1]==search_val){
			return mid1;
		}
		else if (arr[mid2]==search_val){
			return mid2;
		}
		else if (arr[mid1]> search_val){
			end = mid1 -1;
		}
		else if (arr[mid2]<search_val){
			start = mid2 + 1;
		}
		else if ((arr[mid1]<search_val)&&(arr[mid2]>search_val)){
			start = mid1+1;
			end = mid2-1;
		}
	}
	return -1;
}
int main(){
//	int arr[]= {3,7,1,9,5,10,8};
	int arr[]= {1,3,5,7,8,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
//	cout<<size;
	int value;
	cout<<"Enter the search value";
	cin>>value;
//	int result = linear_search(arr, size, value);
//	int result = binary_search(arr, size, value);
	int result = tenary_search(arr, size, value);
//	tenary_search
	if (result != -1){
		cout<<"Element found at index"<<result<<endl;
	}else{
		cout<<"Element not found"<<endl;
	}
	
}
