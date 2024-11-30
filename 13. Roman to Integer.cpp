
class Solution {
public:
    int romanToInt(string str) {
        int res = 0;
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for ( int i=0;i<str.size();i++){
            if(roman[str[i]]<roman[str[i+1]]){
                res -= roman[str[i]];
            }
            else{
                res += roman[str[i]];
            }
        }
        return res;
    }
};
