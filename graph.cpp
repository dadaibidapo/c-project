#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int adj[n+1][m+1];
	for(int i=0; i<m; i++){
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
	for (int j=0; j<n+1; j++){
		for(int k=0; k<m+1; k++){
		
		cout<<adj[j][k]<<endl;
		}
	}
}
