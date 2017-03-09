class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        int maxLength = 0;
        for (int i = 0; i < length; i++){
            int repeat_pos = s.find_first_of(s[i], i + 1);
            int end = 0;
            if (i < repeat_pos and repeat_pos < length){
                end = repeat_pos;
            }else{
                end = length;
            }
            for (int j = i + 1; j < end; j++){
                int pos = s.find_first_of(s[j], j + 1);
                if (i < pos and pos < end){
                    end = s.find_first_of(s[j], j + 1);
                   }
            }
            if (end - i > maxLength){
                maxLength = end - i;
            }
        }
        return maxLength;
        
    }
};
