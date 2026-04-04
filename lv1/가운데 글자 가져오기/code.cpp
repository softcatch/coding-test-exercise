#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int i = s.size() / 2;
    answer += (s.size() % 2 == 0) ? s.substr(i-1,2) : s.substr(i,1);
    return answer;
}
