#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int totalBlock = brown + yellow;
    int height = 2;
    
    while(true){
        height++;        
        if(totalBlock % height == 0){
            int width = totalBlock / height;
            if((width-2)*(height-2) == yellow)
                return { width, height };
        }
    }
}
