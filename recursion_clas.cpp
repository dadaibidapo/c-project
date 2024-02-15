#include<iostream>
using namespace std;

//void f(int i, int x){
//	if (i>=x){
//		return;
//	}else{
//	cout<<i<<"\n";
//	f(i+1, x);
//	}
//}
//
void f(int i, int n){
	if(i<1){
		return;
	}else{
		f(i-1, n);
		cout<<i<<"\n";
	}
}
int main(){
//	f(1,4);
f(4,4);
}
