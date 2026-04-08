#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int maxCnt = 0;
bool isVisited[10];

void dfs(int k, int cnt, const vector<vector<int>>& dungeons){
    maxCnt = max(maxCnt, cnt);
    for(int i = 0; i < dungeons.size(); i++){
        if(!isVisited[i] && k >= dungeons[i][0]){
            isVisited[i] = true;
            dfs(k-dungeons[i][1], cnt+1, dungeons);
            isVisited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    maxCnt = 0;
    dfs(k, 0, dungeons);
    return maxCnt;
}
