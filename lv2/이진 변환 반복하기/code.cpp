#include <string>
#include <vector>

using namespace std;
int zeroCnt = 0;
int removeResult(string& str){
    int cnt1 = 0;
    for(char& c : str){
        if(c == '0'){
            zeroCnt++;
            continue;
        }
        cnt1++;
    }
    return cnt1;
}
string intToBinary(int length){
    string binaryStr = "";
    while(length != 0){
        binaryStr = to_string(length%2) + binaryStr;
        length /= 2;
        
    }
    return binaryStr;
}

vector<int> solution(string s) {
    vector<int> answer;
    string str = s;
    int funcCnt = 0;
    int length = 0;
    while(true) {
        length = removeResult(str);
        str = intToBinary(length);
        funcCnt++;
        if(str == "1")
            break;
    }
    answer.push_back(funcCnt);
    answer.push_back(zeroCnt);
    return answer;
}
