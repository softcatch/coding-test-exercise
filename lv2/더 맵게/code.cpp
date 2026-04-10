#include <string>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {   
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
    
    int minCnt = 0;
    int minScore = 0, nextMinScore = 0;
    while(true){
        if(K <= pq.top()) return minCnt;
        if(2 > pq.size()) return -1;
        
        minScore = pq.top();
        pq.pop();
        nextMinScore = pq.top();
        pq.pop();
        pq.push(minScore + nextMinScore*2);
        minCnt++;
    }
}
