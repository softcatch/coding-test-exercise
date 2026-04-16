#include <iostream>
using namespace std;

int minCnt = 0;
void dfs(int curr){
    if(curr == 0){
        return;
    }
    if(curr % 2 == 0)
        dfs(curr/2);
    else {
        minCnt++;
        dfs((curr-1)/2);
    }
}
int solution(int n)
{
    dfs(n);
    return minCnt;
}
