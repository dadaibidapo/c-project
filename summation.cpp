#include <iostream>

using namespace std;

int main(){
	int i, j;
	int result = 0;
	for(i=1; i<=3; i++){
		for(j=0; j<=i; j++){
			result = result +(2*i);
			cout<<"result at level "<<i<<" stage "<<j<<" is"<<result<<endl;
		}
	}
}
