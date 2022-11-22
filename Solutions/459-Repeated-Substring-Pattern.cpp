class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = s.size();
        string post = s.substr(1, size-1);
        string pre = s.substr(0, size-1);        
        string repeat = post + pre;       
        return repeat.find(s) != string::npos;
    }
};
