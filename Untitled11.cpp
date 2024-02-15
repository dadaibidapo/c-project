#include <iostream>

using namespace std;

int f(int i, int n){
	if(i > n){
		return 0;
	}
	else{
		cout<<i<<endl;
		f(i+1, n);
	}
}

int main(){
	int N;
	cin>>N;
	f(1,N);
}
