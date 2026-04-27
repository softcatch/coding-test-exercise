#include <string>
#include <vector>

using namespace std;

int cnt = 0;

void dfs(const vector<vector<int>>& computers, vector<bool>& visited, int node, bool isNetwork){
    visited[node] = true;
    if(!isNetwork) cnt++;
    

    for(int i = 0; i < computers[node].size(); i++){
        if(node == i)
            continue;
        int conn = computers[node][i];
        if(visited[i] == false && conn == 1){
            isNetwork = true;
            dfs(computers, visited, i, isNetwork);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {

    vector<bool> visited(n, false);
    for(int i = 0; i < n; i++)
        if(visited[i] == false)
            dfs(computers, visited, i, false);
    
    return cnt;
}
