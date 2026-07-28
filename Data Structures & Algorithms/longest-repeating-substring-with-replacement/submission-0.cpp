class Solution {
public:
    int characterReplacement(string s, int k) {
        int result = 0;
        for(int i = 0;i < s.length(); i++){
            unordered_map<char, int> freqMap;
            int maxF = 0;
            for(int j = i; j < s.length(); j++){
                freqMap[s[j]]++;
                maxF = max(maxF, freqMap[s[j]]);
                if((j - i + 1) - maxF <= k){
                    result = max(result,j - i + 1 );
                }
            }
        }
        return result;   
    }
};