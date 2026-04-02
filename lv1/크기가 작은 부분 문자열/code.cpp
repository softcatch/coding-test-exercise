#include <string>
#include <vector>
// #include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i = 0; i < t.size()-p.size()+1; i+=1){
        int isEqual = 0;
        for(int j = 0; j < p.size(); j++){
            char tVal = t[i+j];
            char pVal = p[j];
            // cout << tVal << ' ' << pVal << '\n';
            if(tVal < pVal || 
               (++isEqual == p.size() && tVal == pVal)){
                answer++;
                break;
            } else if(tVal > pVal)
                break;
        }
    }
    return answer;
}
