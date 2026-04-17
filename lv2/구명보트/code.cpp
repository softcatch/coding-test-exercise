#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int cnt = 0;
    int lIdx = 0, rIdx = people.size()-1;
    while(true){
        int lVal = people[lIdx];
        int rVal = people[rIdx];
        if(lVal+rVal <= limit){
            lIdx++;
            rIdx--;
        } else {
            rIdx--;
        }
        cnt++;
        if(rIdx < lIdx){
            return cnt;
        }
    }
}
