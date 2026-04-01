#include <string>
#include <vector>
#include <iostream>

using namespace std;

int dfs(int n, int seqNum, int curSum){
    
    if(curSum > n){
        return 0;
    } else if (curSum == n){
        return 1;    
    }
    return dfs(n, seqNum+1, seqNum+1+curSum);
}

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++){
        answer += dfs(n, i, i);
    }
    return answer;
}
