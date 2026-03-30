#include <string>
#include <vector>

using namespace std;

int dfs(const vector<int>& numbers, int target, int idx, int currSum){
    if(numbers.size() == idx){
        return (target == currSum) ? 1 : 0;
    }
    
    int count = 0;
    count += dfs(numbers, target, idx+1, currSum+numbers[idx]);
    count += dfs(numbers, target, idx+1, currSum-numbers[idx]);
    return count;
}

int solution(vector<int> numbers, int target) {
    int answer = dfs(numbers, target, 0, 0); 
    return answer;
}
