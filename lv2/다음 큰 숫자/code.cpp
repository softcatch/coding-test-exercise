#include <string>
#include <vector>

using namespace std;

int countBinary(int n){
    int cnt = 0;
    while(n != 0){
        int rest = n % 2;
        n /= 2;
        if(rest == 1) cnt++;
    }
    return cnt;
}
int solution(int n) {
    int initCnt = countBinary(n);
    int i = n, nextCnt;
    while(true){
        nextCnt = countBinary(++i);
        if(initCnt == nextCnt)
            return i;
    }
}
