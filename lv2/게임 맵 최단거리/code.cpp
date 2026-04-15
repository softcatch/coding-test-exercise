#include<vector>
#include<queue>
using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int dist[110][110];

int bfs(int startX, int startY, const vector<vector<int>>& maps){
    queue<pair<int, int>> q;
    q.push({startX, startY});
    dist[startX][startY] = 1;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        int n = maps.size();
        int m = maps[0].size();
        
        if(x == n-1 && y == m-1)
            return dist[x][y];
        
        for(int i = 0; i < 4; i+=1){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < n && 0 <= ny && ny < m){
                if(maps[nx][ny] == 1 && dist[nx][ny] == 0){
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return -1;
}

int solution(vector<vector<int> > maps)
{
    int answer = bfs(0, 0, maps);
    return answer;
}
