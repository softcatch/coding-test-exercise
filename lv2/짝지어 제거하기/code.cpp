#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    int len = s.size();
    if(len == 1)
        return 0;

    int currFrontIdx = 0;
    string frontStr(1, s[currFrontIdx]);
    
    for(int i = 1; i < len; i++){
        if(frontStr[currFrontIdx] != s[i]){
            frontStr += s[i];
            currFrontIdx++;
            continue;
        } else {
            frontStr.erase(currFrontIdx, 1);
            currFrontIdx--;
        }
    } 
    return frontStr == "" ? 1 : 0;
}
