import java.util.*;

class Solution {
    public int[] solution(String s) {
        int[] answer = new int[s.length()];
        Map<Character, Integer> map = new HashMap<>();
        
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            Integer prev = map.put(c,i);
            if(prev == null){
                answer[i] = -1;
            } else {
                answer[i] = i - prev;
            }
        }
        return answer;
    }
}
