#include <string>
#include <vector>
#include <algorithm>

using namespace std;
 
vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> minPress(26, 101);
    
    // keymap을 순회하며 알파벳별 최소 누름 횟수를 기록
    for(string& key : keymap){
        int alphabetIdx;
        for(int i = 0; i < key.length(); i++){
            alphabetIdx = key[i]-'A';
            minPress[alphabetIdx] = min(minPress[alphabetIdx], i+1);
        }
    }
    
    // targets를 순회하며 총 누름 횟수 기록
    for(string& target : targets){
        int totalCnt = 0;
        bool isRemain = true;
        for(char& c : target){
            if(minPress[c-'A'] == 101){
                isRemain = false;
                break;
            }
            totalCnt += minPress[c-'A'];
        }
        answer.push_back(isRemain ? totalCnt : -1);
    }
    
    return answer;
}
