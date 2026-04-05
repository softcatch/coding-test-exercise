#include <string>
#include <vector>

using namespace std;

int fibo(int n, vector<int>& v){
    int mod = 1234567;
    if(n <= 1) return n;
    int val = 0, cnt = 0;
    if(v[n-1] != -1){
        val += v[n-1];
        cnt++;
    }
        
    if(v[n-2] != -1){
        val += v[n-2];
        cnt++;
    }
    if(cnt == 2) return val%mod;
        
    val = (fibo(n-1, v) + fibo(n-2, v)) % mod;
    v[n] = val;
    return val;
    
}

int solution(int n) {
    vector<int> v(100001, -1);
    int answer = fibo(n, v);
    return answer;
}
