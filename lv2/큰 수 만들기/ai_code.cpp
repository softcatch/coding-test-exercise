#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    for(char& c : number){
        while(k > 0){
            if(answer.size() != 0 && answer.back() < c){
                answer.pop_back();
                k--;
            } else {
                break;
            }
        }
        answer.push_back(c);
    }
    while(k > 0){
        answer.pop_back();
        k--;
    }
    
    return answer;
}
