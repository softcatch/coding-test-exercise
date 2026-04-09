#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int total = 9*10/2;
    int sum = 0;
    for(const int& num : numbers)
    {
        sum += num;
    }    
    return total-sum;
}
