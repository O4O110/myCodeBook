// 印出最快路徑（座標）
#include<bits/stdc++.h>
#define N 100
using namespace std;

int map[N][N], visited[N][N]={0};
typedef pair<int, int> p;
int n,m,found=0;
deque<p> path;

void dfs(int x, int y){
	if (found==1) return;
	visited[x][y]=1;
	path.push_back(make_pair(x,y));
	if (x==n-1 && y==m-1){
		found=1;
		cout<<"Path: ";
		while(!path.empty()){
			cout<<"("<<path.front().first<<","<<path.front().second<<")";
			path.pop_front();
			cout<<((path.empty())?"\n":"→");
		}
		cout<<endl;
		return;
	}
	if (x+1<n && visited[x+1][y]==0 && map[x+1][y]==0){
		dfs(x+1,y);
		path.pop_back();
	}
	if (y+1<m && visited[x][y+1]==0 && map[x][y+1]==0){
		dfs(x,y+1);
		path.pop_back();
	}
	if (x-1>=0 && visited[x-1][y]==0 && map[x-1][y]==0){
		dfs(x-1,y);
		path.pop_back();
	}
	if (y-1>=0 && visited[x][y-1]==0 && map[x][y-1]==0){
		dfs(x,y-1);
		path.pop_back();
	}
}

int main(){
	cin>>n>>m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin>>map[i][j];
	dfs(0,0);
	if (found==0){
		cout<<"No routes accessible.\n";
	}	
	return 0;
} 
// 顯示最短距離
#include <iostream>
#include <utility>
#include <deque>
#define N 100
using namespace std;

int map[N][N], visited[N][N]={0};
typedef pair<int, int> p;
int n,m,dis=-2;
deque<p> path;

void dfs(int x, int y){
	visited[x][y]=1;
	path.push_back(make_pair(x,y));
	if (x==n-1 && y==m-1){
		if (dis==-1){
			dis=path.size()-1;
		}
		else {
			if (path.size()-1<dis) dis=path.size()-1;
		}
	}
	if (x+1<n && visited[x+1][y]==0 && map[x+1][y]==0){
		dfs(x+1,y);
		visited[x+1][y]=0;
		path.pop_back();
	}
	if (y+1<m && visited[x][y+1]==0 && map[x][y+1]==0){
		dfs(x,y+1);
		visited[x][y+1]=0;
		path.pop_back();
	}
	if (x-1>=0 && visited[x-1][y]==0 && map[x-1][y]==0){
		dfs(x-1,y);
		visited[x-1][y]=0;
		path.pop_back();
	}
	if (y-1>=0 && visited[x][y-1]==0 && map[x][y-1]==0){
		dfs(x,y-1);
		visited[x][y-1]=0;
		path.pop_back();
	}
}

int main(){
	cin>>n>>m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin>>map[i][j];
	dfs(0,0);
	if (dis==-2)
		cout<<"No routes accessible.\n";
	else
		cout<<"Shortest distance: "<<dis<<endl;	
	return 0;
} 
