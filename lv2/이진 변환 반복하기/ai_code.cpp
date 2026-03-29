#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    int transformCnt = 0, removedZeros = 0;
    while(s != "1"){
        // 0 제거 횟수
        int ones = count(s.begin(), s.end(), '1');
        removedZeros += (s.size()-ones);
        
        // 이진 변환
        s = "";
        for(; ones != 0; ones/=2){
            s += (ones % 2 == 1 ? '1' : '0');
        }
        transformCnt++;
        
    }
    return {transformCnt, removedZeros};
}
