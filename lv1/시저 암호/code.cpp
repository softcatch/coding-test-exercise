#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c : s){
        if(islower(c)){
            answer += (c-'a'+n)%26+'a';
        } else if(isupper(c)){
            answer += (c-'A'+n)%26+'A';
        } else {
            answer += c;
        }
    }
    return answer;
}
