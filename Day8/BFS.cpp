
#include<vector>
#include<iostream>
using namespace std;
vector<int>A[Max];
int N,M,K, t=0;
int x[Max];
bool visited[Max];

void input(){
	cin>>N>>M>>K;
	for(int i =0; i<M;i++){
		int u,v;
		cin>>u>>v;
		A[u].push_back(v);
		A[v].push_back(u);
	}
}

void init(){
	for(int i =1 ; i<=N;i++){
		x[i] = 0;
		visited[i] = false;
	}
}

bool check(int u, int v){
	for(int i =0; i<A[u].size();i++){
		if(A[u][i] == v){
			return true;
		}
	}
	return false;
}




int main(){
	input();
    init();
    x[1] = K;
    
}
