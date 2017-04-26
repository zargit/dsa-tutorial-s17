#include <iostream>
#include <vector>

using namespace std;

//vector<int> graph;  // int array[size];
vector< vector<char> > graph; // int array[size][size];
//                 U  R  D  L
vector<int> dr = {-1, 0, 1, 0}; // int dr[] = {-1, 0, 1, 0};
vector<int> dc = {0, 1, 0, -1}; // int dc[] = {0, 1, 0, -1};


void generateGraph(int row, int col, char symbol){
	graph.resize(row);
	for(int i=0;i<row;i++){
		graph[i].assign(col, symbol);
	}
}

void displayGraph(){
	for(int i=0;i<graph.size();i++){
		for(int j=0;j<graph[0].size();j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

bool isInside(int nr, int nc){
	if(nr>=0 && nr<graph.size() && nc>=0 && nc<graph[0].size()){
		return true;
	}
	return false;
}

void dfs(int sr, int sc, char depth='A'){
	if(graph[sr][sc]!='#') return; // base rule

	graph[sr][sc] = depth;

	for(int i=0;i<dr.size();i++){  // no c++11: i < 4
		int nr = sr + dr[i];
		int nc = sc + dc[i];

		if(isInside(nr, nc)){
			dfs(nr, nc, depth+1);
		}
	}
}

int main(){
	generateGraph(5,5,'#');
	displayGraph();
	dfs(4,4);
	displayGraph();
	return 0;
}
