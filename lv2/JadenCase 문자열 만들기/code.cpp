#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    // 예외처리1 : 첫글자 소문자 처리
    answer += ('a' <= s[0] && s[0] <= 'z') ? s[0] -'a' + 'A' : s[0];

    for(int i = 1; i < s.size(); i++){
        // 예외처리2 : 앞 글자 공백, 뒷 글자 소문자 
        if(s[i-1] == ' ' && ('a' <= s[i] && s[i] <= 'z')){
            answer += s[i] -'a' + 'A';
        // 예외처리3 : 앞 글자 알파벳, 뒷 글자 대문자
        } else if(s[i-1] != ' ' && ('A' <= s[i] && s[i] <= 'Z')){
            answer += s[i] -'A' + 'a';
        } else
            answer += s[i];
    }
    return answer;
}
