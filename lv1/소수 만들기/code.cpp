#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;


int solution(vector<int> nums) {
    int answer = 0;
    
    unordered_map<int, bool> primeVec;
    int minSum = 6;
    for(int i = minSum; i < 3000; i++){
        bool isPrime = true;
        for(int j = 2; j*j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        primeVec[i] = isPrime;
    }
    
    for(int i = 0; i < nums.size()-2; i++){
        for(int j = i+1; j < nums.size()-1; j++){
            for(int k = j+1; k < nums.size(); k++){
                int sum = nums[i]+nums[j]+nums[k];
                answer += primeVec[sum] ? 1 : 0;
            }
        }
    }

    

    return answer;
}
