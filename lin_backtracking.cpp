#include <iostream>

using namespace std;

int f(int i, int n){
	if(i< 1){
		return 0;
	}
	else{
		f(i-1, n);
		cout<<i<<endl;
	}
}

int main(){
	int N;
	cin>>N;
	f(N,N);
}
